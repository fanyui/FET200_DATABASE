/*
A PROGRAME MADE BY HARISU FANYUI ON THE 27 JANUARY 2015
THIS IS AN OPEN SOURCE PROGRAME AND CAN BE MODIFIED BY ANY MEMBER OF 
FACULTY OF ENGINEERING AND S
OFTWARE ENGINEERS IN PARTICULAR
THANKS FOR USING OR HELPING IN MODIFYING POSITIVELY
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "out.h"
#include "appendmat.h"
char ch;
//void deleted();


int main(){
	FILE *frd;
	int response;
	int i;
	char totest[9];
	char matricule[9],mtest[9];//mtest to check matricule
	char grade1[3],grade2[3];
	char gtest1[3],grest2[3];//to check grade 1 and grade 2
	system("clear");
mainmenu:
printf("\n\tYOU ARE WELCOME TO MY PROGRAME \n\n\t WHO ARE YOU PLEASE ENTER\n\n\t 1 IF YOU ARE A STUDENT OR \n\n\t 2 IF YOU ARE A LECTURER\n");
scanf("%d",&response);
system("clear");
switch(response){
	case 1:
		i=0;
			printf("ENTER THE YOUR MATRICULATION NUMBER TO SEE THE GRADE YOU HAVE\n");
			scanf("%s",mtest);
			frd=fopen("MATRICULE.txt","r");
			if (frd==NULL)
				printf("file cannot be read\n");
				else {
					while(!feof(frd)){
						fscanf(frd,"%s%s%s",matricule,grade1,grade2);
						if (strcmp(matricule,mtest)==0){
					                printf("matricule\tgrade1\tgrade2\n");
							i++;
							printf("%s\t%s\t%s\n",mtest,grade1,grade2);
						}
					}
if (i==0)
				printf("\nYOU ARE NOT AN ADMITTED CANDIDATE OF THIS COURSE\n\a");
				}
						//THIS BLOCK OF CODE TAKES YOU TO THE MAIN MENU
										printf("\nPLEASE INPUT M TO GO TO MAIN MENU OR E TO EXIT\n");
	scanf("%c",&ch);
	scanf("%c",&ch);
	if (ch=='M')
	goto mainmenu;
		else if(ch=='E'){
			printf("good bye...\n");
				sleep(3);
			system ("clear");
			exit(0);
		}
				else{
					printf("invalid response:\n");
					exit(0);
				}				
	break;
	case 2:
		{
		int option;
		printf("\nWHAT DO YOU WANT TO DO MR. LECTURER\n1=CHECK THE NUMBER OF STUDENT WITH A PARTICULAR GRADE IN WRITING\n");
		printf("\n2=CHECK THE NUMBER OF STUDENT WITH A PARTICULAR GRADE IN GRADING \n");
		printf("\n3=THOSE WHO PEFORM BETTER IN GRADING THAN WRITING\n");
		printf("\n 4= TO ADD NEW STUDENT TO THE LIST\n");
		printf("\n 5= TO DELETE A STUDENT\n");
		printf("\n6=TO EDIT A STUDENT INFOMATION\n");
			scanf("%d",&option);
system("clear");
//SECOND SWITCH BEGINS TO CHECK THE ABOVE CONDITIONS
		switch(option){
			case 1:
						{
						int count=0;
						char grade[3];
						printf("\nENTER THE GRADE YOU ARE INTERESTED IN\n");
						scanf("%s",grade);
					frd=fopen("MATRICULE.txt","r");
					if (frd==NULL)
						printf("file cannot be open\n");
					while(!feof(frd)){
							fscanf(frd,"%s%s%s",matricule,grade1,grade2);
							  if (strcmp(grade1,grade)==0){
								printf("%s\t%s\n",matricule,grade);
							       count++;
							}
					} printf("\nTHERE ARE %d STUDENT WITH THE GRADE %s IN FIRST GRADING\n",count,grade);
			//THIS BLOCK OF CODE TAKES YOU TO THE MAIN MENU
									printf("\nPLEASE INPUT M TO GO TO MAIN MENU OR E TO EXIT\n");
	scanf("%c",&ch);
	scanf("%c",&ch);
	if (ch=='M')
	goto mainmenu;
		else if(ch=='E'){
			printf("good bye...\n");
				sleep(3);
			system ("clear");
			exit(0);
		}
				else{
					printf("invalid response:\n");
					exit(0);
				}				
			break;}
			case 2:{
					int count=0;
						char grade[3];
						printf("\nENTER THE GRADE YOU ARE INTERESTED IN\n");
						scanf("%s",grade);
					frd=fopen("MATRICULE.txt","r");
					if (frd==NULL)
						printf("file cannot be open\n");
					while(!feof(frd)){
							fscanf(frd,"%s%s%s",matricule,grade1,grade2);
							  if (strcmp(grade2,grade)==0){
								printf("%s\t%s\n",matricule,grade);
							       count++;
							   }			
					}
						 printf("\nTHERE ARE %d STUDENT WITH THE GRADE %s IN SECOND GRADING\n",count,grade);
		//THIS BLOCK OF CODE TAKES YOU TO THE MAIN MENU
									printf("\nPLEASE INPUT M TO GO TO MAIN MENU OR E TO EXIT\n");
	scanf("%c",&ch);
	scanf("%c",&ch);
	if (ch=='M')
	goto mainmenu;
		else if(ch=='E'){
			printf("good bye...\n");
				sleep(3);
			system ("clear");
			exit(0);
		}
				else{
					printf("invalid response:\n");
					exit(0);
				}				
			      break;
			}
				case 3:{
					int count=0;
						printf("\nTHOSE WHO PERFORM WELL IN WRITING THAN GRADING ARE\n");
						
					frd=fopen("MATRICULE.txt","r");
					if (frd==NULL)
						printf("file cannot be open\n");
					while(!feof(frd)){
							fscanf(frd,"%s%s%s",matricule,grade1,grade2);
							  if (strcmp(grade1,grade2)>0){
								printf("%s %s %s\n",matricule,grade1,grade2);
							   }
						//else printf("no student did well in marking than writing\n");
					}
					fclose(frd);
			//THIS BLOCK OF CODE TAKES YOU TO THE MAIN MENU
									printf("\nPLEASE INPUT M TO GO TO MAIN MENU OR E TO EXIT\n");
	scanf("%c",&ch);
	scanf("%c",&ch);
	if (ch=='M')
	goto mainmenu;
		else if(ch=='E'){
			printf("good bye...\n");
				sleep(3);
			system ("clear");
			exit(0);
		}
				else{
					printf("invalid response:\n");
					exit(0);
				}				
							
					break;}
	case 4:
	
			appendmat();
			//printf("\n");
		//THIS BLOCK OF CODE TAKES YOU TO THE MAIN MENU
									printf("\nPLEASE INPUT M TO GO TO MAIN MENU OR E TO EXIT\n");
	scanf("%c",&ch);
	scanf("%c",&ch);
	if (ch=='M')
	goto mainmenu;
		else if(ch=='E'){
			printf("good bye...\n");
				sleep(3);
			system ("clear");
			exit(0);
		}
				else{
					printf("invalid response:\n");
					exit(0);
				}				

	break;
	
	case 5:
	
		deleted();
						printf("\nPLEASE INPUT M TO GO TO MAIN MENU OR E TO EXIT\n");
	scanf("%c",&ch);
	scanf("%c",&ch);
	if (ch=='M')
	goto mainmenu;
		else if(ch=='E'){
			printf("good bye...\n");
				sleep(3);
			system ("clear");
			exit(0);
		}
				else{
					printf("invalid response:\n");
					exit(0);
				}				
		break;
	case 6:
			update();
				printf("\nPLEASE INPUT M TO GO TO MAIN MENU OR E TO EXIT\n");
		scanf("%c",&ch);
		scanf("%c",&ch);
		if (ch=='M')
		goto mainmenu;
			else if(ch=='E'){
				printf("good bye...\n");
					sleep(3);
				system ("clear");
				exit(0);
			}
					else{
						printf("invalid response:\n");
						exit(0);
					}				
	break;
			default:
				printf("SORRY WE DO NOT UNDERSTAND YOUR CHOICE\n");
					//THIS BLOCK OF CODE TAKES YOU TO THE MAIN MENU
					
							
								printf("\nPLEASE INPUT M TO GO TO MAIN MENU OR E TO EXIT\n");
	scanf("%c",&ch);
	scanf("%c",&ch);
	if (ch=='M')
	goto mainmenu;
		else if(ch=='E'){
			printf("good bye...\n");
				sleep(3);
			system ("clear");
			exit(0);
		}
				else{
					printf("invalid response:\n");
					exit(0);
				}					
							
			break;
		}
//SECOND SWITCH ENDs

	break;
}//first switch ends
}
return 0;
}
//delete function
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
//update function
void update(){
FILE *fp;
int i=0;
char store[9],mark1[3],mark2[3];
char updateValue[9],updatemark1[3],updatemark2[3];
FILE *st;
printf("enter matricule number of the student you want to edit\n");
scanf("%s",updateValue);
fp=fopen("MATRICULE.txt","r");
if (fp==NULL)
	printf("cannot open matricule file\n");
st=fopen("tempMatri.txt","w");
if (st==NULL)
printf("cannot create temporal file\n");

while(!feof(fp)){
	fscanf(fp,"%s%s%s",store,mark1,mark2);
	if(strcmp(store,updateValue)==0){
		
		printf("ENTER NEW INFOMATION\n");
		printf("MATRICULE\tMARK1\tMARK2\n");
		scanf("%s%s%s",updateValue,updatemark1,updatemark2);
		strcpy(store,updateValue);
		strcpy(mark1,updatemark1);
		strcpy(mark2,updatemark2);
	fprintf(st,"%s\t%s\t%s\n",store,mark1,mark2);
		printf("update successful\n");
		i++;
	}
	else {
		fprintf(st,"%s\t%s\t%s\n",store,mark1,mark2);
	
	}
}
if (i==0)
	printf("no such matricule number exist in this database\n");
fclose(st);
fclose(fp);
//the following lines swap the file names after deleting a record
rename("MATRICULE.txt","halfConvert.txt");
rename("tempMatri.txt","MATRICULE.txt");
rename("halfConvert.txt","tempMatri.txt");





}
