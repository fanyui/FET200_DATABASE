#include<stdio.h>
#include<stdlib.h>
#include "out.h"
void output(){
	char pmark1[3],pmark2[3];
	char pmatricule[9];
		FILE *fread;
		fread=fopen("MATRICULE.txt","r");
			if (fread==NULL)
				printf("can't open file\n");
			   else{
				fscanf(fread,"%s\t%s\t%s",pmatricule,pmark1,pmark2);
				while(!feof(fread)){
					printf("%s\t%s\t%s\n",pmatricule,pmark1,pmark2);
					fscanf(fread,"%s\t%s\t%s",pmatricule,pmark1,pmark2);
				}
			    }
			fclose(fread);
}

//UPDATE FUNCION


