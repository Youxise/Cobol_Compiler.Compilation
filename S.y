%{
int nb=1,i=0,n,j=0;
int col=1;
char vars[20][9];
char types[20][9];
char buf[25];
char cstype[10];
char sigtype[10];
char *type;
int a=0;
%}

%union {
int entier;
float reel;
char* str;
}           
%token mc_ident mc_data mc_prog mc_work mc_proc mc_stopr mc_et mc_ou mc_non mc_sup mc_inf mc_supe
 mc_infe mc_equi mc_diff mc_const <str>mc_int <str>mc_float <str>mc_char <str>mc_str mc_line mc_size mc_type mc_acc 
 mc_disp mc_if mc_else mc_move mc_to mc_end <entier>csti <reel>cstf <str>cstch <str>cstst pvg egal aff <str>add <str>sous
  <str>mult <str>divi <str>idff point parG parD sepv virg deup gui1 gui2 doll apos ecom arob pcen hash <str>disp
%type <str> CSTE TYPE2 CST OPER
%left          mc_ou                
%left          mc_et         
%left     mc_sup mc_inf mc_supe mc_infe mc_equi mc_diff                 
%left     add sous           
%left     mult divi 
%start S
%%
S : mc_ident mc_prog idff point mc_data mc_work LIST_DEC mc_proc LIST_INSTR mc_stopr   {    printf ("\n --- Programme syntaxiquement correct --- \n");    YYACCEPT;}
;

LIST_DEC : DEC LIST_DEC
         | ;

DEC : DEC_VAR TYPE2 {for(n=0;n<i;n++) {
                            if (doubleDeclaration(vars[n])==0) insererTYPE(vars[n],$2);
                            else  printf ("<< Erreur semantique ( Idf deja declaree ), ligne %d, colonne %d : %s >>\n",nb,col,vars[n]);
                          }
                          i=0;}
    | DEC_CST 
    | DEC_TAB TYPE2 {for(n=0;n<i;n++) {
                            if (doubleDeclaration(vars[n])==0) insererTYPE(vars[n],$2);
                            else  printf ("<< Erreur semantique ( Idf deja declaree ), ligne %d, colonne %d : %s >>\n",nb,col,vars[n]);
                          }
                          i=0;}
;

DEC_VAR :  idff sepv DEC_VAR        { strcpy(vars[i],$1); //printf("vars[%d]= %s\n",i,vars[i]); 
                                      i++;} 
        | idff    { strcpy(vars[i],$1);
                          i++; }
;



DEC_CST :  mc_const A;


A: idff TYPE2 { if (doubleDeclaration($1)==0) {insererTYPE($1,$2); insererCODE($1);}
                    else  printf ("<< Erreur semantique ( Idf deja declaree ), ligne %d, colonne %d : %s >>\n",nb,col,$1);}

  | idff aff CST point { if (doubleDeclaration($1)==0) {insererTYPE($1,cstype); insererCODE($1);
                                                        modifier_val($1,$3);  }
                    else  printf ("<< Erreur semantique ( Idf deja declaree ), ligne %d, colonne %d : %s >>\n",nb,col,$1);}
;


TYPE2 : mc_int {$$=$1;}
     | mc_float {$$=$1;} 
     | mc_char {$$=$1;}
     | mc_str {$$=$1;} 
;

CST : csti {strcpy(cstype,"INTEGER.");sprintf(buf,"%d",$1);  $$=buf;}
    |cstf {strcpy(cstype,"FLOAT.");sprintf(buf,"%f",$1);  $$=buf;}
    |cstch {strcpy(cstype,"CHAR.");$$=$1;}
    |cstst {strcpy(cstype,"STRING.");$$=$1;}
;

DEC_TAB : idff sepv DEC_TAB { strcpy(vars[i],$1);
                              i++;}

        | idff mc_line csti virg mc_size csti {  if (($3<0)||($6<1)) printf ("<< Erreur semantique ( Taille du tableau ou borne inferieure hors limites ), ligne %d, colonne %d : %s ou %s >>\n",nb,col,$3,$6);
                                                  strcpy(vars[i],$1);
                                                  i++;}
;


LIST_INSTR : INSTR LIST_INSTR
           | 
;

INSTR : AFFECTATION | IF_STAT | BOUCLE | LECTURE | ECRITURE
;

LECTURE : mc_acc parG gui1 SIGNE gui2 deup arob idff parD point { if (doubleDeclaration($8)==0) printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s >>\n",nb,col,$8);
                                                                  if(strcmp((char*)TypeEntite($8),sigtype)!=0) printf ("<< Erreur semantique ( Incompatibilite de types dans ACCEPT), ligne %d, colonne %d : %s >>\n",nb,col,$8);}

ECRITURE : mc_disp parG disp deup idff parD point { if (doubleDeclaration($5)==0) printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s >>\n",nb,col,$5);
                                                    /*if (nbSIGNE(disp,sigtype)!=1) printf ("Erreur ba33");
                                                    else*/ if(strcmp((char*)TypeEntite($5),sigtype)!=0) printf ("<< Erreur semantique ( Incompatibilite de types dans DISPLAY), ligne %d, colonne %d : %s >>\n",nb,col,$5);               }

SIGNE : ecom {strcpy(sigtype,"STRING.");}
      | hash {strcpy(sigtype,"CHAR.");}
      | pcen {strcpy(sigtype,"FLOAT.");}
      | doll {strcpy(sigtype,"INTEGER.");}
;

IF_STAT : mc_if parG CONDITIONS parD deup LIST_INSTR B
;

B : mc_end
  | mc_else deup LIST_INSTR mc_end
;

BOUCLE : mc_move idff mc_to idff LIST_INSTR mc_end { if ((doubleDeclaration($2)==0)||(doubleDeclaration($4)==0)) printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s ou %s >>\n",nb,col,$2,$4);}
       | mc_move idff mc_to csti LIST_INSTR mc_end { if (doubleDeclaration($2)==0) printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s >>\n",nb,col,$2);}
       | mc_move csti mc_to idff LIST_INSTR mc_end { if (doubleDeclaration($4)==0) printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s >>\n",nb,col,$4);}
;

AFFECTATION : idff aff EXPRESSION point { if (doubleDeclaration($1)==0) printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s >>\n",nb,col,$1);
                                         else { if (verifIDF($1)==1) printf ("<< Erreur semantique ( Constante ne peut pas changer de valeur), ligne %d, colonne %d : %s >>\n",nb,col,$1);
                                                else{
                                                    for(n=0;n<j;n++) {
                                                      if(strcmp((char*)TypeEntite($1),(char*)TypeEntite(types[n]))!=0) {
                                                      printf ("<< Erreur semantique ( Incompatibilite de types), ligne %d, colonne %d : entre %s et %s >>\n",nb,col,$1,types[n]);
                                                       }
                                                      strcpy(types[n],"");
                                                    }
                                                j=0;
                                                }
                                              }
                                        }                                          
;

EXPRESSION : C OPER EXPRESSION 
           | C
;

OPER : add {$$=$1;}
      | sous {$$=$1;}
      | mult {$$=$1;}
      | divi{$$=$1; a=1;}
;

C : idff {if (doubleDeclaration($1)==0) printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s >>\n",nb,col,$1);
          else {
              strcpy(types[j],$1);
              j++;
            if(a==1) {
                      if(recheche_val($1)==0) { printf("<< Erreur semantique ( division par 0 ), ligne %d, colonne %d : %s >>\n",nb,col,$1);}
                     }
            if(a==1) a=0;
           // if((b==1) && strcmp((char*)TypeEntite($1),cstype)!=0)  {printf("Erreur semantique: incompatibilite de type, ligne %d, colonne %d \n",nb,col); b=0; strcpy(cstype,"");}
          } 
          
        }
  | CSTE {strcpy(types[j],$1);
              j++;}
;

CSTE : csti { //printf("csti=%d\n",$1);
              if(($1==0) && (a==1)) {printf("<< Erreur semantique ( division par 0 ), ligne %d, colonne %d : %s >>\n",nb,col,$1); a=0;}
              if(a==1) a=0;
              //if((b==1) && strcmp((char*)TypeEntite($1),cstype)!=0)  {printf("Erreur semantique: incompatibilite de type, ligne %d, colonne %d \n",nb,col); b=0;strcpy(cstype,"");}
              //itoa($1, buf, 10); 
              sprintf(buf,"%d",$1); $$=buf;
                   }
     |  cstf { //printf("cstf=%f\n",$1);
              if(($1==0) && (a==1)) {printf("<< Erreur semantique ( division par 0 ), ligne %d, colonne %d : %s >>\n",nb,col,$1); a=0;}
              if(a==1) a=0;
              //if((b==1) && strcmp((char*)TypeEntite($1),cstype)!=0) {printf("Erreur semantique: incompatibilite de type, ligne %d, colonne %d \n",nb,col);b=0;strcpy(cstype,"");}
              //gcvt($1, 10, buf); 
              sprintf(buf,"%f",$1);  $$=buf; 
              }

    
;

CONDITIONS : CONDITION_SIMPLE | CONDITION_COMPLEXE
;

CONDITION_SIMPLE : CONDITION
;

CONDITION_COMPLEXE : parG CONDITION parD BETA CONDITION_COMPLEXE
                   | parG CONDITION parD
;

CONDITION : EXPRESSION EQ EXPRESSION          { for(n=1;n<j;n++) {
                                                      if(strcmp((char*)TypeEntite(types[0]),(char*)TypeEntite(types[n]))!=0) {
                                                      printf ("<< Erreur semantique ( Incompatibilite de types), ligne %d, colonne %d : entre %s et %s >>\n",nb,col,types[0],types[n]);
                                                       }
                                                      strcpy(types[n],"");
                                                    }
                                                j=0; }
          | EXPRESSION                        { for(n=1;n<j;n++) {
                                                      if(strcmp((char*)TypeEntite(types[0]),(char*)TypeEntite(types[n]))!=0) {
                                                      printf ("<< Erreur semantique ( Incompatibilite de types), ligne %d, colonne %d : entre %s et %s >>\n",nb,col,types[0],types[n]);
                                                       }
                                                      strcpy(types[n],"");
                                                    }
                                                j=0; }
          | mc_non parG EXPRESSION parD       { for(n=1;n<j;n++) {
                                                      if(strcmp((char*)TypeEntite(types[0]),(char*)TypeEntite(types[n]))!=0) {
                                                      printf ("<< Erreur semantique ( Incompatibilite de types), ligne %d, colonne %d : entre %s et %s >>\n",nb,col,types[0],types[n]);
                                                       }
                                                      strcpy(types[n],"");
                                                    }
                                                j=0; }
;

EQ : mc_sup | mc_inf | mc_supe | mc_infe | mc_equi | mc_diff
;

BETA : mc_ou | mc_et
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
