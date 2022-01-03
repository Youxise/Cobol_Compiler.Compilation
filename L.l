%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"S.tab.h"
#include"T.h"
int yylineo=1;
extern col;
extern YYSTYPE yylval;
%}
chiffre [0-9]
chiffrenonNUL [1-9]
lettremin [a-z]
lettremaj [A-Z]
com #(.|\n)*!
idf {lettremaj}({lettremin}|{chiffre})*
cstint 0|{chiffrenonNUL}{chiffre}*|"("[-+]{chiffrenonNUL}{chiffre}*")"
cstfloat 0|(0|{chiffrenonNUL}{chiffre}*)"."{chiffre}+|"("[-+](0|{chiffrenonNUL}{chiffre}*)"."{chiffre}+")"
cstchar \'.\'
cststr \"(.|\n)*\"
dispstr \”(.+)\“
%%
{com}
"IDENTIFICATION DIVISION." 	 { 	  
									rechercher(yytext,"Mot cle","","",1);
									col=col+strlen(yytext); return mc_ident; }

"PROGRAM-ID."				 { 		rechercher(yytext,"Mot cle","","",1);
									col=col+strlen(yytext);	return mc_prog; }

"DATA DIVISION."			 	 { 	rechercher(yytext,"Mot cle","","",1);
									col=col+strlen(yytext);	return mc_data; }

"WORKING-STORAGE SECTION."	 { 		rechercher(yytext,"Mot cle","","",1);
									col=col+strlen(yytext);	return mc_work; }

"PROCEDURE DIVISION."		 { 		rechercher(yytext,"Mot cle","","",1);
									col=col+strlen(yytext);	return mc_proc; }

"STOP RUN"					 { 		rechercher(yytext,"Mot cle","","",1);
									col=col+strlen(yytext);	return mc_stopr; }

".AND."							 { 	rechercher(yytext,"Mot cle","","",1);
									col=col+strlen(yytext);	return mc_et; }

".OR."						 { 		rechercher(yytext,"Mot cle","","",1);
									col=col+strlen(yytext);	return mc_ou; }

NOT							 { 		rechercher(yytext,"Mot cle","","",1);
									col=col+strlen(yytext);	return mc_non; }

".G."							 { 	rechercher(yytext,"Superieur","","",2);
									col=col+strlen(yytext);	return mc_sup; }

".L."							 { 	rechercher(yytext,"Inferieur","","",2);
									col=col+strlen(yytext);	return mc_inf; }

".GE."						 { 		rechercher(yytext,"Superieur ou Egal","","",2);
									col=col+strlen(yytext);	return mc_supe; }

".LE."						 { 		rechercher(yytext,"Inferieur ou Egal","","",2);
									col=col+strlen(yytext);	return mc_infe; }

".EQ."						 { 		rechercher(yytext,"Equivalent","","",2);
									col=col+strlen(yytext);	return mc_equi; }

".DI."						 { 		rechercher(yytext,"Different","","",2);
									col=col+strlen(yytext);	return mc_diff; }

CONST 						 { 		rechercher(yytext,"Mot cle","","",1);
									col=col+strlen(yytext);	return mc_const; }

"INTEGER."					 { 		rechercher(yytext,"Mot cle","","",1);
									col=col+strlen(yytext);	
									yylval.str=strdup(yytext);
									return mc_int; }

"FLOAT."					 { 		rechercher(yytext,"Mot cle","","",1);
									col=col+strlen(yytext);	
									yylval.str=strdup(yytext);
									return mc_float; }

"CHAR."						 { 		rechercher(yytext,"Mot cle","","",1);
									col=col+strlen(yytext);	
									yylval.str=strdup(yytext);
									return mc_char; }

"STRING."					 { 		rechercher(yytext,"Mot cle","","",1);
									col=col+strlen(yytext);	
									yylval.str=strdup(yytext);
									return mc_str; }

LINE						 { 		rechercher(yytext,"Mot cle","","",1);
									col=col+strlen(yytext); return mc_line; }

SIZE						 { 		rechercher(yytext,"Mot cle","","",1);
									col=col+strlen(yytext); return mc_size; }

TYPE						 { 		rechercher(yytext,"Mot cle","","",1);
									col=col+strlen(yytext); return mc_type; }

ACCEPT						 { 		rechercher(yytext,"Mot cle","","",1);
									col=col+strlen(yytext);	return mc_acc; }

DISPLAY						 { 		rechercher(yytext,"Mot cle","","",1);

									col=col+strlen(yytext); return mc_disp; }

IF							 { 		rechercher(yytext,"Mot cle","","",1);
									col=col+strlen(yytext); return mc_if; }

ELSE						 { 		rechercher(yytext,"Mot cle","","",1);
									col=col+strlen(yytext);	return mc_else; }

MOVE						 { 		rechercher(yytext,"Mot cle","","",1);	
									col=col+strlen(yytext);	return mc_move; }

TO							 { 		rechercher(yytext,"Mot cle","","",1);
									col=col+strlen(yytext);	return mc_to; }

END							 { 		rechercher(yytext,"Mot cle","","",1);
									col=col+strlen(yytext);	return mc_end; }

";" 						 { 		rechercher(yytext,"Point virgule","","",2);
									col=col+strlen(yytext);	return pvg; }

":" 						 { 		rechercher(yytext,"Deux points","","",2);
									col=col+strlen(yytext);	return deup;}

"==" 						 { 		rechercher(yytext,"Egal","","",2);	
									col=col+strlen(yytext);	return egal; }

"=" 						 { 		rechercher(yytext,"Affectation","","",2);
									col=col+strlen(yytext);	return aff; }

"+" 						 { 	    rechercher(yytext,"Plus","","",2);
									yylval.str=strdup(yytext); 
							    	col=col+strlen(yytext);	return add; }

"-" 						 { 	    rechercher(yytext,"Moins","","",2);
									yylval.str=strdup(yytext); 
								    col=col+strlen(yytext);	return sous; }

"*" 						 {      rechercher(yytext,"Fois","","",2);
									yylval.str=strdup(yytext); 
								    col=col+strlen(yytext);	return mult; }

"/" 						 { 	    rechercher(yytext,"Divise","","",2);
						        	yylval.str=strdup(yytext); 
									col=col+strlen(yytext);	return divi; }

\.						 	 {      rechercher(yytext,"Point","","",2);
									col=col+strlen(yytext); return point; }

"("							 { 		rechercher(yytext,"Parenthese ouvrante","","",2);
									col=col+strlen(yytext); return parG; }

")"							 { 		rechercher(yytext,"Parenthese fermante","","",2);
									col=col+strlen(yytext); return parD; }

"|"							 { 		rechercher(yytext,"Barre","","",2);
									col=col+strlen(yytext); return sepv; }

"“"							{ 		rechercher(yytext,"Guillemet ouvrant","","",2);
									col=col+strlen(yytext);  return gui1; }

"$"							{ 		rechercher(yytext,"Dollar","","",2);
									col=col+strlen(yytext);  return doll;}

"%"							{ 		rechercher(yytext,"Pourcent","","",2);
									col=col+strlen(yytext);  return pcen;}

"@"							{ 		rechercher(yytext,"Arobase","","",2);
									col=col+strlen(yytext);  return arob;}

"&"							{ 		rechercher(yytext,"Ecommercial","","",2);
									col=col+strlen(yytext);  return ecom;}

"#"							{ 		rechercher(yytext,"Hashtag","","",2);
									col=col+strlen(yytext);  return hash;}

"”"							{ 		rechercher(yytext,"Guillemet fermant","","",2);
									col=col+strlen(yytext);  return gui2;}

"'"							{ 		rechercher(yytext,"Apostrophe","","",2);
									col=col+strlen(yytext);  return apos;}

","							 { 		rechercher(yytext,"Virgule","","",2);
									col=col+strlen(yytext); return virg; }

{dispstr}					{	
								col=col+strlen(yytext);
								yylval.str=strdup(yytext);

								return disp;}	

{cstint} 					 { 		if ((atoi(yytext)>-32768)&&(atoi(yytext)<32767)) {
															rechercher(yytext,"Cst","INTEGER.",yytext,0);
															col=col+strlen(yytext);
															yylval.entier=atoi(yytext); 
															return csti;	 }
									else { printf ("<< Erreur lexicale ( Depassement de valeur ), ligne %d, colonne %d : %s >>\n",yylineo,col,yytext);	col=col+strlen(yytext); }
																		 }

{cstfloat} 					 { 		if ((atof(yytext)>-32768)&&(atof(yytext)<32767)) {
									rechercher(yytext,"Cst","FLOAT.",yytext,0);
									col=col+strlen(yytext);
									yylval.reel=atof(yytext);	
									return cstf;	 }
									else { printf ("<< Erreur lexicale ( Depassement de valeur ), ligne %d, colonne %d : %s >>\n",yylineo,col,yytext);	col=col+strlen(yytext); }
																			}

{cstchar} 					 { 		rechercher(yytext,"Cst","CHAR.","",0);
									col=col+strlen(yytext);
									yylval.str=strdup(yytext);	
									return cstch;	 }

{cststr} 					 { 	    rechercher(yytext,"Cst","STRING.","",0);
							        col=col+strlen(yytext);	
									yylval.str=strdup(yytext);
									return cstst;	 }

{idf} 						{ if (yyleng<9) { 		rechercher(yytext,"IDF","","",0);
													col=col+strlen(yytext);
													yylval.str=strdup(yytext);		
													return idff;  }
							  else { printf ("<< Erreur lexicale ( IDF trop long ), ligne %d, colonne %d : %s >>\n",yylineo,col,yytext);	col=col+strlen(yytext); }	 }

[ \t] col=col+strlen(yytext);
\n { yylineo++; col=1; }
. printf("<< Erreur lexicale, ligne : %d, colonne : %d : %s >>\n",yylineo,col,yytext);
%%
