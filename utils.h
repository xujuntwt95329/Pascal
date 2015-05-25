#ifndef __PASCAL_H__
#define __PASCAL_H__

extern int yylex();
// extern int yyparse();
extern int yylineno;
extern char *yytext;

void yyerror(char *s, ...);

typedef struct ast_struct ast_tree;
typedef ast_tree ast_node;

struct ast_struct {
	ast_node** ch;		// children
	char* debug;		// debug info
};

ast_node* ast_dbg(char* debug);
ast_node* ast_newNode1(ast_node* c1);
ast_node* ast_newNode2(ast_node* c1, ast_node* c2);
ast_node* ast_newNode3(ast_node* c1, ast_node* c2, ast_node* c3);
ast_node* ast_newNode4(ast_node* c1, ast_node* c2, ast_node* c3, ast_node* c4);
ast_node* ast_newNode5(ast_node* c1, ast_node* c2, ast_node* c3, ast_node* c4, ast_node* c5);

#endif