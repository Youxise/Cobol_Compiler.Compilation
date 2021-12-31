%{
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"ts.h"
int nb=1;
int col=1;

%}
chiffre [0-9]
chiffrenonNUL [1-9]
lettremin [a-z]
lettremaj [A-Z]
com #(.|\n)*!
idf {lettremaj}({lettremin}|{chiffre})*
cstint 0|{chiffrenonNUL}{chiffre}*
cstfloat 0|(0|{chiffrenonNUL}{chiffre}*)"."{chiffre}+
cstchar \'.\'
cststr \"(.|\n)*\"
dispstr \“.+\”
%%
"IDENTIFICATION DIVISION." 	 { 	  
									rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);  }

PROGRAM-ID					 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);	 }

"DATA DIVISION."			 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);	 }

"WORKING-STORAGE SECTION."	 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);	 }

"PROCEDURE DIVISION."		 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);	 }

"STOP RUN"					 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);	  }

AND							 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);	 }

OR							 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);	 }

NOT							 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);	 }

.G.							 { 		rechercher(yytext,"sep","",0,2);
									col=col+strlen(yytext);	 }

.L.							 { 		rechercher(yytext,"sep","",0,2);
									col=col+strlen(yytext);	 }

.GE.						 { 		rechercher(yytext,"sep","",0,2);
									col=col+strlen(yytext);	 }

.LE.						 { 		rechercher(yytext,"sep","",0,2);
									col=col+strlen(yytext);	 }

.EQ.						 { 		rechercher(yytext,"sep","",0,2);
									col=col+strlen(yytext);	 }

.DI.						 { 		rechercher(yytext,"sep","",0,2);
									col=col+strlen(yytext);	 }

CONST 						 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);	 }

"INTEGER."					 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);	 }

"FLOAT."					 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);	 }

"CHAR"						 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);	}

"STRING."					 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);	}

LINE						 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);  }

SIZE						 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext); }

TYPE						 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);  }

ACCEPT						 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);	 }

DISPLAY						 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);  }

READ						 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);  }

IF							 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);  }

ELSE						 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);	 }

MOVE						 { 		rechercher(yytext,"Mot cle","",0,1);	
									col=col+strlen(yytext);	 }

TO							 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);	 }

END							 { 		rechercher(yytext,"Mot cle","",0,1);
									col=col+strlen(yytext);	 }

";" 						 { 		rechercher(yytext,"sep","",0,2);
									col=col+strlen(yytext);	 }

":" 						 { 		rechercher(yytext,"sep","",0,2);
									col=col+strlen(yytext);	 }

"==" 						 { 		rechercher(yytext,"sep","",0,2);	
									col=col+strlen(yytext);	 }

"=" 						 { 		rechercher(yytext,"sep","",0,2);
									col=col+strlen(yytext);	 }

"+" 						 { 	    rechercher(yytext,"sep","",0,2);
							    	col=col+strlen(yytext);	 }

"-" 						 { 	    rechercher(yytext,"sep","",0,2);
								    col=col+strlen(yytext);	 }

"*" 						 {      rechercher(yytext,"sep","",0,2);
								    col=col+strlen(yytext);	 }

"/" 						 { 	    rechercher(yytext,"sep","",0,2);
						        	col=col+strlen(yytext);	 }

"."							 {      rechercher(yytext,"sep","",0,2);
									col=col+strlen(yytext);  }

"("							 { 		rechercher(yytext,"sep","",0,2);
									col=col+strlen(yytext);  }

")"							 { 		rechercher(yytext,"sep","",0,2);
									col=col+strlen(yytext);  }

"|"							 { 		rechercher(yytext,"sep","",0,2);
									col=col+strlen(yytext);  }

"“"							{ 		rechercher(yytext,"sep","",0,2);
									col=col+strlen(yytext);  }

"$"							{ 		rechercher(yytext,"sep","",0,2);
									col=col+strlen(yytext);  }

"”"							{ 		rechercher(yytext,"sep","",0,2);
									col=col+strlen(yytext);  }

"'"							{ 		rechercher(yytext,"sep","",0,2);
									col=col+strlen(yytext);  }

","							 { 		rechercher(yytext,"sep","",0,2);
									col=col+strlen(yytext); return virg; }

{com}
{dispstr}						
{idf} 						{ if (yyleng<9) { 		rechercher(yytext,"idf","",0,0);
													col=col+strlen(yytext);  }
							  else { printf (" Erreur lexicale : IDF trop long, a la ligne : %d, colonne : %d, entite : %s ",nb,col,yytext);	col=col+strlen(yytext); }	 }

{cstint} 					 { 		if ((atoi(yytext)>-32768)&&(atoi(yytext)<32767)) {
															rechercher(yytext,"cst","entier",atof(yytext),0);
															col=col+strlen(yytext);	 }
									else { printf (" Erreur lexicale a la ligne %d, colonne : %d ",nb,col);	col=col+strlen(yytext); }
																		 }

{cstfloat} 					 { 		rechercher(yytext,"cst","reel",atof(yytext),0);
									col=col+strlen(yytext);	 }

{cstchar} 					 { 		rechercher(yytext,"cst","caractere",0,0);
									col=col+strlen(yytext);	 }

{cststr} 					 { 	    rechercher(yytext,"cst","chaine",0,0);
							        col=col+strlen(yytext);	 }

[ \t] col++;
\n { nb++; col=1; }
. printf(" Erreur lexicale a la ligne : %d, colonne : %d dans l'entite : %s \n",nb,col,yytext);
%%
int main ()
{
	initialisation();
	yyin=fopen("programmeLang2.txt","r");
	if (yyin==NULL) printf ("Erreur \n");
	else yylex();
	afficher();
	return 0;
}
