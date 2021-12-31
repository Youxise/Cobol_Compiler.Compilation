%{
int nb=1;
int col=1;
char sauvType[25];
char buf[25];
int a;
%}
%union {
int entier;
float reel;
char* str;
char c;
}           
%token mc_ident mc_data mc_prog mc_work mc_proc mc_stopr mc_et mc_ou mc_non mc_sup mc_inf mc_supe
 mc_infe mc_equi mc_diff mc_const <str>mc_int <str>mc_float <str>mc_char <str>mc_str mc_line mc_size mc_type mc_acc 
 mc_disp mc_read mc_if mc_else mc_move mc_to mc_end <entier>csti <reel>cstf <str>cstch <str>cstst pvg egal aff <c>add <c>sous
  <c>mult <c>divi <str>idff point parG parD sepv comm virg deup gui1 gui2 doll apos ecom arob pcen hash
%type <c> OPER OPER2
%type <str> C CSTE
%left          mc_ou                
%left          mc_et         
%left     mc_sup mc_inf mc_supe mc_infe mc_equi mc_diff                 
%left     add sous           
%left     mult divi 
%start S
%%
S : mc_ident mc_prog idff point mc_data mc_work LIST_DEC mc_proc LIST_INSTR mc_stopr   {    printf ("\n Programme syntaxiquement correct !\n");    YYACCEPT;}
;

LIST_DEC : DEC LIST_DEC
         | ;

DEC : DEC_VAR 
    | DEC_CST 
    | DEC_TAB
;

DEC_VAR : idff TYPE          /* { if (doubleDeclaration($1)==0) insererType($1,sauvType);
                                else printf ("Erreur semantique");} */
        | idff sepv DEC_VAR
;

DEC_CST : mc_const idff A 
;

A : TYPE
  | aff CST point
;

DEC_TAB : idff mc_line csti virg mc_size csti TYPE {
                                                        if (($3<1)||($6<1)) printf ("Erreur semantique, ligne %d, colonne %d\n",nb,col);
}
;

LIST_INSTR : INSTR LIST_INSTR
           | 
;

INSTR : AFFECTATION | IF_STAT | BOUCLE | LECTURE
;

LECTURE : mc_acc parG gui1 SIGNE gui2 deup arob idff parD point { if (doubleDeclaration($8)==0) printf ("Erreur semantique: variable %s non declaree\n",$8);}

SIGNE : ecom
      | hash
      | pcen
      | doll
;

AFFECTATION : idff aff EXPRESSION point { if (doubleDeclaration($1)==0) printf ("Erreur semantique: variable %s non declaree\n",$1);}
;

IF_STAT : mc_if parG CONDITIONS parD deup LIST_INSTR B
;

B : mc_end
  | mc_else deup LIST_INSTR mc_end
;

BOUCLE : mc_move idff mc_to idff LIST_INSTR mc_end { if ((doubleDeclaration($2)==0)||(doubleDeclaration($4)==0)) printf ("Erreur semantique: variable %s ou %s non declaree\n",$2,$4);}
       | mc_move idff mc_to csti LIST_INSTR mc_end { if (doubleDeclaration($2)==0) printf ("Erreur semantique: variable %s non declaree\n",$2);}
       | mc_move csti mc_to idff LIST_INSTR mc_end { if (doubleDeclaration($4)==0) printf ("Erreur semantique: variable %s non declaree\n",$4);}
;



EXPRESSION : C OPER C EXP           {if (($2=='/') && (recheche_val($3)==0)) printf ("Erreur semantique: divison pqr 0\n"); // C OPER idff EXP
                                    // if (($2=='/')&& (a==2) && strcmp())
                                    }
           | C OPER2 EXPRESSION 
           | C 
           | EXPRESSIONP;

EXP : OPER2 C {if (($1=='/') && (recheche_val($2)==0)) printf ("Erreur semantique: divison pqr 0\n");}
    | OPER2 EXPRESSIONP 
    | OPER2 EXPRESSION;

EXPRESSIONP : parG EXPRESSION parD | parG EXPRESSION parD OPER EXPRESSION;


EQ : mc_sup | mc_inf | mc_supe | mc_infe | mc_equi | mc_diff
;

BETA : mc_ou | mc_et
;

C : idff {$$=strdup($1); a=1;}
  | CSTE {$$=strdup($1); a=2;}
;

CSTE : csti {itoa($1, buf, 10); $$=strdup(buf);}
    |  cstf {gcvt($1, 10, buf); $$=strdup(buf);}
;


OPER2 : add {$$=$1;}
       | sous {$$=$1;}
       | mult {$$=$1;}
;

OPER : OPER2
      | divi{$$=$1;}
;

TYPE : mc_int {strcpy(sauvType,$1);} 
     | mc_float {strcpy(sauvType,$1);} 
     | mc_char {strcpy(sauvType,$1);} 
     | mc_str {strcpy(sauvType,$1);} 
;

CST : csti 
    |cstf
    |cstch
    |cstst
;

CONDITIONS : CONDITION_SIMPLE | CONDITION_COMPLEXE
;

CONDITION_SIMPLE : CONDITION
;

CONDITION_COMPLEXE : parG CONDITION parD BETA CONDITION_COMPLEXE
                   | parG CONDITION parD
;

CONDITION : EXPRESSION EQ EXPRESSION | EXPRESSION | mc_non EXPRESSION
;


%%
main ()
{
initialisation();
yyparse();
afficher();
}
yywrap()
{}
int yyerror (char *msg ) { 
        printf ("Erreur syntaxique, ligne %d, colonne %d \n",nb,col); 
        return 1; }
