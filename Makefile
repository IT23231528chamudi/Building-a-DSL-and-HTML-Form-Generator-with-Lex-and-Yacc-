all:
	bison -d parser.y
	flex lexer.l
	gcc -o formlangpp parser.tab.c lex.yy.c -lfl
	./formlangpp < example.form