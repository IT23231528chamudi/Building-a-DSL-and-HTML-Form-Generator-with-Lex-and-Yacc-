%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function declarations and field-attribute state
FILE *html_file; 
char *current_field = NULL;
char *current_password = NULL;

void yyerror(const char *s);
int yylex();
int yyparse(void);

//Defines helper functions
int is_required = 0;
char *pattern_val = NULL;
int min_val = -1;
int max_val = -1;
char *accept_val = NULL;

void reset_field_attrs() {
    is_required = 0;
    if (pattern_val) free(pattern_val);
    if (accept_val) free(accept_val);
    pattern_val = NULL;
    accept_val = NULL;
    min_val = -1;
    max_val = -1;
}

int main() {
    yyparse();
    if (current_password) free(current_password);
    if (current_field) free(current_field);
    return 0;
}

%}

//defines types for semantic values
%union {
    int num;
    char* str;
}

%token <str> ID STRING
%token <num> NUMBER_VAL
%token FORM SECTION FIELD META VALIDATE IF ERROR
%token TEXT TEXTAREA EMAIL NUMBER DATE CHECKBOX DROPDOWN RADIO PASSWORD FILE_TYPE
%token REQUIRED DEFAULT MIN MAX PATTERN ACCEPT ROWS COLS
%token LBRACE RBRACE LBRACKET RBRACKET COLON SEMICOLON EQUAL LT GT COMMA
%token NE EQOP

%start program

%%

program:
    form_def
;

//Creates the HTML file and writes the basic structure
form_def:
    FORM ID LBRACE {
        html_file = fopen("output.html","w");
        if (!html_file) { 
        perror("fopen"); 
        exit(1); }

        fprintf(html_file,
            "  <!DOCTYPE html>\n"
            "  <html>\n"
            "  <head>\n"
            "  <meta charset=\"UTF-8\">\n"
            "  <title>%s Form</title>\n"

        "  <style>\n"
            "    body {\n"
            "      font-family: Arial, sans-serif;\n"
            "      margin: 20px;\n"
            "      background-color:rgb(230, 249, 247);\n"
            "    }\n"
                  
                  // Main form box
            "    .form-box {\n"
            "      border: 2px solid #ccc;\n"
            "      border-radius: 10px;\n"
            "      padding: 25px;\n"
            "      box-shadow: 0 0 15px rgba(0, 0, 0, 0.1);\n"
            "      background-color: #f0f2f5;\n"
            "      max-width: 600px;\n"
            "      margin: 40px auto;\n"
            "    }\n"
                 
                  // form elements 
            "     fieldset {\n"
            "      margin-bottom: 20px;\n"
            "      padding: 15px;\n"
            "      border: 1px solid #ccc;\n"
            "      border-radius: 5px;\n"
            "    }\n"

            "      legend {\n"
            "      font-weight: bold;\n"
            "      padding: 0 10px;\n"
            "    }\n"

            "      label {\n"
            "      display: block;\n"
            "      margin-bottom: 15px;\n"
            "    }\n"

            "      input[type=\"text\"], input[type=\"email\"], input[type=\"number\"],\n"
            "      input[type=\"date\"], input[type=\"password\"], select, textarea {\n"
            "      width: 100%%;\n"
            "      padding: 8px;\n"
            "      margin-top: 4px;\n"
            "      margin-bottom: 10px;\n"
            "      border: 1px solid #ddd;\n"
            "      border-radius: 4px;\n"
            "      box-sizing: border-box;\n"
            "    }\n"

            "      input[type=\"checkbox\"], input[type=\"radio\"] {\n"
            "      margin-bottom: 10px;\n"
            "      align-items: center;\n"
            "      transform: scale(1.5);\n"
            "    }\n"

            "    .form-submit {\n"
            "      text-align: center;\n"
            "      margin-top: 20px;\n"
            "    }\n"

            "      input[type=\"submit\"] {\n"
            "      background-color: #4CAF50;\n"
            "      color: white;\n"
            "      padding: 10px 20px;\n"
            "      border: none;\n"
            "      border-radius: 4px;\n"
            "      cursor: pointer;\n"
            "    }\n"

            "      input[type=\"submit\"]:hover {\n"
            "      background-color: #45a049;\n"
            "    }\n"

            "      h1 {\n"
            "      text-align: center;\n"
            "      margin-bottom: 20px;\n"
            "    }\n" 
        "  </style>\n"

        "  <script>\n"
            "      function handleSubmit(event) {\n"
            "      const form = event.target;\n"
            "      let isValid = true;\n"
            "      \n"

                  // Password validation\n"
            "      const password = form.userpassword ? form.userpassword.value : '';\n"
            "      const confirmPassword = form.confirmPassword ? form.confirmPassword.value : '';\n"
            "      if (password && !/^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)[a-zA-Z\\d]{8,}$/.test(password)) {\n"
            "         alert('Password must contain at least 8 characters, including uppercase, lowercase letters and numbers');\n"
            "      isValid = false;\n"
            "      }\n"
            "      if (password !== confirmPassword) {\n"
            "         alert('Passwords do not match.');\n"
            "         isValid = false;\n"
            "     }\n"
            "     \n"

            "      const nic = form['NIC']?.value || '';\n"
            "      if (!/^\\d{12}$/.test(nic)) {\n"
            "         errors.push('NIC must be exactly 12 digits');\n"
            "         isValid = false;\n"
            "      }\n"
            "      \n"

            "      const mob = form['Mobile_Number']?.value || '';\n"
            "      if (!/^\\d{10}$/.test(mob)) {\n"
            "          errors.push('Mobile number must be exactly 10 digits');\n"
            "          isValid = false;\n"
            "      }\n"
            "      \n"

            "      if (isValid) {\n"
            "          alert('Form submitted successfully!');\n"
            "          form.reset();\n"
            "       }\n"
            "      }\n"
            
        "  </script>\n"

            "</head>\n"
            "<body>\n"
            "  <div class=\"form-box\">\n" 
            "  <h1>Registration Form</h1>\n"
            "  <form name=\"%s\" action=\"#\" onsubmit=\"handleSubmit(event)\">\n",
            $2, $2
        );
    }
    form_content
    RBRACE {
        fprintf(html_file,
            "   <div class=\"form-submit\">\n"
            "   <input type=\"submit\" value=\"Submit Form\">\n"
            "   </div>\n"
            "  </form>\n"
            "  </div>\n"
            "</body>\n"
            "</html>\n"
        );
        fclose(html_file);
    }
;

//Allows multiple form items
form_content:
    form_content form_item
  | /* empty */
;

form_item:
    meta_decl
  | section_def
  | validation_block
;

meta_decl:
    META ID EQUAL STRING SEMICOLON {
        fprintf(html_file, "<!-- Meta %s = %s -->\n", $2, $4);
    }
;

// Creates HTML fieldset sections
section_def:
    SECTION ID LBRACE {
        fprintf(html_file, "<fieldset>\n<legend>%s</legend>\n", $2);
    }
    field_list
    RBRACE {
        fprintf(html_file, "</fieldset>\n");
    }
;

field_list:
    field_list field_def
  | /* empty */
;

//Handles different input types
field_def:
   FIELD ID COLON TEXT field_attrs SEMICOLON {
        if (current_field) free(current_field);
        current_field = strdup($2);

        if (strcmp($2, "NIC")==0 && !pattern_val) {
            pattern_val = strdup("\\d{12}");
        }

        if (strcmp($2, "Mobile_Number")==0 && !pattern_val) {
            pattern_val = strdup("\\d{10}");
        }

        fprintf(html_file,
            "  <label>%s: <input type=\"text\" name=\"%s\"", $2, $2);
        if (is_required)     fprintf(html_file, " required");
        if (pattern_val)     fprintf(html_file, " pattern=\"%s\"", pattern_val);
            fprintf(html_file, "></label><br>\n");
        reset_field_attrs();
    }

  | FIELD ID COLON EMAIL field_attrs SEMICOLON {
        if (current_field) free(current_field);
        current_field = strdup($2);

        fprintf(html_file, "    <label>%s: <input type=\"email\" name=\"%s\"", $2, $2);
        if (is_required) fprintf(html_file, " required");
        if (pattern_val) {
            fprintf(html_file, " pattern=\"%s\"", pattern_val);
        }
            fprintf(html_file, "></label><br>\n");
        reset_field_attrs();
    }

  | FIELD ID COLON NUMBER field_attrs SEMICOLON {
        if (current_field) free(current_field);
        current_field = strdup($2);

        fprintf(html_file, 
            "    <label>%s: <input type=\"number\" name=\"%s\"", $2, $2);
        if (min_val >= 0) fprintf(html_file, " min=\"%d\"", min_val);
        if (max_val >= 0) fprintf(html_file, " max=\"%d\"", max_val);
        if (is_required) fprintf(html_file, " required");
            fprintf(html_file, "></label><br>\n");
        reset_field_attrs();
    }

  | FIELD ID COLON DATE field_attrs SEMICOLON {
        if (current_field) free(current_field);
        current_field = strdup($2);

        fprintf(html_file, "    <label>%s: <input type=\"date\" name=\"%s\"", $2, $2);
        if (is_required) fprintf(html_file, " required");
            fprintf(html_file, "></label><br>\n");
        reset_field_attrs();
    }

  | FIELD ID COLON PASSWORD field_attrs SEMICOLON {
        if (current_field) free(current_field);
        current_field = strdup($2);

        fprintf(html_file, "    <label>%s: <input type=\"password\" name=\"%s\"", $2, $2);
        if (is_required) fprintf(html_file, " required");
        fprintf(html_file, " pattern=\"(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)[a-zA-Z\\d]{8,}\"");
        fprintf(html_file, " title=\"Must contain at least 8 characters, including uppercase, lowercase letters and numbers\">");
        fprintf(html_file, "</label><br>\n");
        
        if (strcmp($2, "password") == 0) {
            if (current_password) free(current_password);
            current_password = strdup($2);
        }
        reset_field_attrs();
    }

  | FIELD ID COLON TEXTAREA field_attrs SEMICOLON {
        if (current_field) free(current_field);
        current_field = strdup($2);
        
        fprintf(html_file, "  <label>%s: <textarea name=\"%s\" rows=\"5\" cols=\"40\"></textarea></label><br>\n", $2, $2);
        reset_field_attrs();
    }

  | FIELD ID COLON RADIO LBRACKET {
        if (current_field) free(current_field);
        current_field = strdup($2);

        fprintf(html_file, "   <div class=\"radio-group\">\n<label>%s:</label>\n", $2);
    } 
    
    option_list RBRACKET field_attrs SEMICOLON {
        if (is_required) {
            fprintf(html_file, 
            "  <input type=\"radio\" name=\"%s\" style=\"display:none\" tabindex=\"-1\" required>\n", current_field);
    }
            fprintf(html_file, "  </div><br>\n");
        reset_field_attrs();
    }

  | FIELD ID COLON CHECKBOX field_attrs SEMICOLON {
        if (current_field) free(current_field);
        current_field = strdup($2);

        fprintf(html_file, "  <div class=\"checkbox-option\">\n");
        fprintf(html_file, "  <input type=\"checkbox\" name=\"%s\"", $2);

        fprintf(html_file, ">\n");
        fprintf(html_file, "  <label>%s</label>\n", $2);
             fprintf(html_file, "   </div><br>\n");
        reset_field_attrs();
    }

  | FIELD ID COLON DROPDOWN LBRACKET {
        if (current_field) free(current_field);
        current_field = strdup($2);

        fprintf(html_file, "    <label>%s: ", $2);
        fprintf(html_file, "     <select name=\"%s\"", $2);
        if (is_required) fprintf(html_file, " required");
        fprintf(html_file, ">\n");

        fprintf(html_file,"    <option value=\"\" disabled selected hidden>Select an option</option>\n");
    } 
    
    dropdown_option_list RBRACKET field_attrs SEMICOLON {
             fprintf(html_file, "    </select></label><br>\n");
        reset_field_attrs();
    }

  | FIELD ID COLON FILE_TYPE field_attrs SEMICOLON {
        if (current_field) free(current_field);
        current_field = strdup($2);

        fprintf(html_file, "    <label>%s: <input type=\"file\" name=\"%s\"", $2, $2);
        if (is_required) fprintf(html_file, " required");
        if (accept_val) fprintf(html_file, " accept=\"%s\"", accept_val);
            fprintf(html_file, "></label><br>\n");
        reset_field_attrs();
    }
;


//Processes field attributes 
field_attrs:
  | field_attrs field_attr
;

field_attr:
    REQUIRED {
        is_required = 1;
    }
  | DEFAULT EQUAL STRING {}
  | MIN EQUAL NUMBER_VAL {
        min_val = $3;
    }
  | MAX EQUAL NUMBER_VAL {
        max_val = $3;
    }
  | PATTERN EQUAL STRING {
        if (pattern_val) free(pattern_val);
        pattern_val = strdup($3);
    }
  | ACCEPT EQUAL STRING {
        if (accept_val) free(accept_val);
        accept_val = strdup($3);
    }
;

//Handles radio button  options
option_list:
    STRING {
        fprintf(html_file, "<div class=\"radio-option\">\n");
        fprintf(html_file, "  <input type=\"radio\" name=\"%s\" value=\"%s\" id=\"%s_%s\">\n", 
                current_field, $1, current_field, $1);
        fprintf(html_file, "  <label for=\"%s_%s\">%s</label>\n", current_field, $1, $1);
        fprintf(html_file, "</div>\n");
    }
  | option_list COMMA STRING {
        fprintf(html_file, "<div class=\"radio-option\">\n");
        fprintf(html_file, "  <input type=\"radio\" name=\"%s\" value=\"%s\" id=\"%s_%s\">\n", 
                current_field, $3, current_field, $3);
        fprintf(html_file, "  <label for=\"%s_%s\">%s</label>\n", current_field, $3, $3);
        fprintf(html_file, "</div>\n");
    }
;

//dropdown options
dropdown_option_list:
    STRING {
        fprintf(html_file, "  <option value=\"%s\">%s</option>\n", $1, $1);
    }
  | dropdown_option_list COMMA STRING {
        fprintf(html_file, "   <option value=\"%s\">%s</option>\n", $3, $3);
    }
;

//Adds validation rules
validation_block:
    VALIDATE LBRACE validation_list RBRACE
;

validation_list:
    validation_list validation_rule
  | /* empty */
;

validation_rule:
    IF ID LT NUMBER_VAL LBRACE ERROR STRING SEMICOLON RBRACE {
        fprintf(html_file, "<!-- Validation: if %s < %d, error: %s -->\n", $2, $4, $7);
    }
  | IF ID NE ID LBRACE ERROR STRING SEMICOLON RBRACE {
        fprintf(html_file, "<!-- Validation: if %s != %s, error: %s -->\n", $2, $4, $7);
    }
;

%%

//handles parsing errors
void yyerror(const char *s) {
    extern char *yytext;
    fprintf(stderr, "Parse error: %s at '%s'\n", s, yytext);
    if (html_file) fclose(html_file);
    exit(1);
}
