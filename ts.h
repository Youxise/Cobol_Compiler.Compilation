#include <stdio.h>
#include <stdlib.h>

typedef struct
{
   int state;
   char name[40];
   char code[40];
   char type[40];
   double val;
 } var_cst;


typedef struct
{ 
   int state; 
   char name[40];
   char type[20];
} MC_sep;


var_cst tab1[1000];
MC_sep tab2[40],tab3[40];
extern char sav[20];


void initialisation()
{
  int i;
  for (i=0;i<1000;i++)  tab1[i].state=0;
  
  

  for (i=0;i<40;i++)
    {tab2[i].state=0;
    tab3[i].state=0;}

}


void inserer (char entite[], char code[],char type[],float val,int i, int choice)
{
  switch (choice)
 { 
   case 0:
       tab1[i].state=1;
       strcpy(tab1[i].name,entite);
       strcpy(tab1[i].code,code);
	   strcpy(tab1[i].type,type);
	   tab1[i].val=val;
	   break;

   case 1:
       tab3[i].state=1;
       strcpy(tab3[i].name,entite);
       strcpy(tab3[i].type,code);
       break; 
    
   case 2:
      tab2[i].state=1;
      strcpy(tab2[i].name,entite);
      strcpy(tab2[i].type,code);
      break;
 }


}


void rechercher (char entite[], char code[],char type[],float val,int choice)	
{

int j,i;

switch(choice) 
  {
   case 0:
        for (i=0;((i<1000)&&(tab1[i].state==1))&&(strcmp(entite,tab1[i].name)!=0);i++); 
        if((i<1000)&&(strcmp(entite,tab1[i].name)!=0))
        { 
	        
			inserer(entite,code,type,val,i,0); 
	      
         }
        //else
          //printf("entite existe deja!\n");
        break;

   case 1:
       
       for (i=0;((i<40)&&(tab3[i].state==1))&&(strcmp(entite,tab1[i].name)!=0);i++); 
        if(i<40)
          inserer(entite,code,type,val,i,1);
        //else
          //printf("entite existe deja!\n");
        break; 
    
   case 2:
         for (i=0;((i<40)&&(tab2[i].state==1))&&(strcmp(entite,tab1[i].name)!=0);i++); 
        if(i<40)
         inserer(entite,code,type,val,i,2);
        //else
   	       //printf("entite existe deja!\n");
        break;

    case 3:
        for (i=0;((i<1000)&&(tab1[i].state==1))&&(strcmp(entite,tab1[i].name)!=0);i++); 
                  
        if (i<1000)
        { inserer(entite,code,type,val,i,0); }
        //else
          //printf("entite existe deja!\n");
        break;
  }

}

int Recherche_position(char entite[])
{
		int i=0;
		while(i<1000)
		{
		
		if(tab1[i].state==1) if (strcmp(entite,tab1[i].name)==0) return i;	
		i++;
		}
 
		return -1;
		
}

double recheche_val(char entite[])
{
 int x=Recherche_position(entite);
 if(x==-1) {printf("Entite n'existe pas dans la TS\n"); return -1;}

 return tab1[x].val;

}

double modifier_val(char entite[],)
{
 int x=Recherche_position(entite);
 if(x==-1) {printf("Entite n'existe pas dans la TS\n"); return -1;}

 return tab1[x].val;

}



int verifIDF(char entite[])
{
 int x=Recherche_position(entite);
 if(x==-1) {printf("Entite n'existe pas dans la TS\n"); return -1;}
 else if ((strcmp(tab1[x].code,"IdfCst")==0) && (tab1[x].val!=99999) ) return 1;

}

	 void insererTYPE(char entite[], char type[])
{
     int pos;
	   pos=Recherche_position(entite);
	   if(pos!=-1)  { strcpy(tab1[pos].type,type);
                     //printf("Insersion type: entite = %s type = %s\n",tab1[pos].name,tab1[pos].type);
                     }
}

void insererCODE(char entite[])
{
     int pos;
	   pos=Recherche_position(entite);
	   if(pos!=-1)  { strcpy(tab1[pos].code,"IdfCst");
                     }
}

/*int nbSIGNE (char chaine[],char TYPE[])
{
  int nb=0,i=0;
  char Signes[]="#%&$";
Signes[0]='#';
  Signes[1]='%';
  Signes[2]='&';
  Signes[3]='$';

  for (i ; i<strlen(chaine) ; i++ ) {
    if ((chaine[i]==Signes[0])||(chaine[i]==Signes[1])||(chaine[i]==Signes[2])||(chaine[i]==Signes[3])) {
    nb++;
    if (chaine[i]==Signes[0]) strcpy(TYPE,"CHAR.");
    if (chaine[i]==Signes[1]) strcpy(TYPE,"FLOAT.");
    if (chaine[i]==Signes[2]) strcpy(TYPE,"INTEGER.");
    if (chaine[i]==Signes[3]) strcpy(TYPE,"STRING.");
    if (nb>1) return -1;
    }
  }

  if (nb==1) return 1;
    else return -1;

}
*/


/*
int nbSIGNE (char chaine[],char TYPE[])
{
  int nb=0,i=0;
  for (i ; i<strlen(chaine) ; i++ ) {
    if ((strcmp((char)chaine[i],'#')==0)||(strcmp(chaine[i],'%')==0)||(strcmp(chaine[i],'$')==0)||(strcmp(chaine[i],'&')==0)) {
    nb++;
    if (strcmp(chaine[i],'%')==0) strcpy(TYPE,"CHAR.");
    if (strcmp(chaine[i],'#')==0) strcpy(TYPE,"FLOAT.");
    if (strcmp(chaine[i],'&')==0) strcpy(TYPE,"INTEGER.");
    if (strcmp(chaine[i],'$')==0) strcpy(TYPE,"STRING.");
    if (nb>1) return -1;
    }
  }

  if (nb==1) return 1;
    else return -1;

}
*/


char * TypeEntite(char entite[])
	{
	int pos;
	
  pos=Recherche_position(entite);

  return tab1[pos].type;

}  
	
	int doubleDeclaration(char entite[])
	{
	int pos;
	pos=Recherche_position(entite);
	if(strcmp(tab1[pos].type,"")==0) return 0;
	   else return -1;
	  
  }
	
 void majType(char (*noms)[9],char t[],int n)
  {
    int j;
    //printf("Je suis dans la TS 1: n = %d type = %s\n",n,t);
    for(j=0;j<n;j++)
    {
      insererTYPE(noms[j],t);
      //k=Recherche_position(noms[j]);
      //printf("Je suis dans la TS: entite = %s k= %d\n",noms[j],k);
      //if(k!=-1) {strcpy(tab1[k].type,t);}// printf("Je suis dans la TS: type de entite = %s est = %s\n",tab1[k].name,tab1[k].type);}
      //else printf("Entite n'existe pas dans la TS\n");
    }
	}

void afficher()
{int i;

printf("\t/***************Table des symboles IDF*************/\n");
printf("_________________________________________________________________________________________\n");
printf("\t|           Nom_Entite         |   Code_Entite    | Type_Entite | Val_Entite\n");
printf("__________________________________________________________________________________________\n");
  
for(i=0;i<1000;i++)
{	
	//strcpy(tab1[i].type,"type");
    if(tab1[i].state==1)
      { 
        printf("\t|          %10s           |%15s | %12s | %12f\n",tab1[i].name,tab1[i].code,tab1[i].type,tab1[i].val);
         
      }
}

 
printf("\n\t/***************Table des symboles mots cle*************/\n");

printf("_______________________________________________________\n");
printf("\t| \t \t NomEntite | \t CodeEntite\n");
printf("_______________________________________________________\n");
  
for(i=0;i<40;i++)
    if(tab3[i].state==1)
      { 
        printf("\t|%25s |\t%12s\n",tab3[i].name,tab3[i].type);
               
      }

printf("\n\t/***************Table des symboles separateurs*************/\n");

printf("__________________________________________________________\n");
printf("\t|         NomEntite         |      CodeEntite      | \n");
printf("___________________________________________________________\n");
  
for(i=0;i<40;i++)
    if(tab2[i].state==1)
      { 
        printf("\t|         %10s         | %12s \t| \n",tab2[i].name,tab2[i].type );
        
      }

}

