#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "appendmat.h"
int box=0;
void appendmat(){

char mark1[3],mark2[3],matricule[9];
char frmfilemark1[3],frmfilemark2[3],frmfilematricule[9];
FILE *fmat;
FILE *toread;
	output();//display those who are already in the list
	printf("please input student matriculation number and marks\n");
	printf("MAT.NUM  \tGRADE  \tGRADE2\n");
		scanf("%s %s %s",matricule,mark1,mark2);
toread=fopen("MATRICULE.txt","r");
if (toread==NULL)
	printf("cannot open file\n");
	else {
			while(!feof(toread)){
					fscanf(toread,"%s%s%s",frmfilematricule,frmfilemark1,frmfilemark2);
						if(strcmp(matricule,frmfilematricule)==0){
								box=0;
								break;
						}
					else box++;
			}
		fclose(toread);
	}
	if(box!=0){
			fmat=fopen("MATRICULE.txt","a");
			if (fmat==NULL)
				printf("can't open file\n");
				else{

						fprintf(fmat,"%s\t%s\t%s\n",matricule,mark1,mark2);
						fclose(fmat);
						output();//display the appended list}
				}
	}
	else printf("THIS MATRICULE ALREADY EXIST\n");
}

//THE DELETE FUNCTION AND IT DEFINITION
/*
void deleted(){
FILE *fp;
int i=0;
char store[9],mark1[3],mark2[3];
char delValue[9];
FILE *st;
printf("enter matricule number of the student you want to delete\n");
scanf("%s",delValue);
fp=fopen("MATRICULE.txt","r");
if (fp==NULL)
	printf("cannot open matricule file\n");
st=fopen("tempMatri.txt","w");
if (st==NULL)
printf("cannot create temporal file\n");

while(!feof(fp)){
	fscanf(fp,"%s%s%s",store,mark1,mark2);
	if(strcmp(store,delValue)==0){
		i=5;
		printf("delete successfull\n");
		continue;
	}
	else{
		fprintf(st,"%s\t%s\t%s\n",store,mark1,mark2);
	}
}

if (i!=5)
	printf("THE MATRICULE YOU ENTERED DOES NOT EXIST AND CAN NOT BE DELETED\n");
fprintf(fp,"\b");
fclose(st);
fclose(fp);
//the following lines swap the file names after deleting a record
rename("MATRICULE.txt","halfConvert.txt");
rename("tempMatri.txt","MATRICULE.txt");
rename("halfConvert.txt","tempMatri.txt");
}
*/
