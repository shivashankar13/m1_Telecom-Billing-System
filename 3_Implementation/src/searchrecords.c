#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include"searchrecords.h"

void searchrecords()
{
	FILE *file1;
	char pn[20];
	//int flag=1;
	file1=fopen("c:/file.ojs","rb+");
	if(file1==0)
		exit(0);
	//fflush(stdin);
	system("cls");
	printf("Enter Phone Number to search in our database");
	scanf("%4s", pn);
	while(fread(&s,sizeof(s),1,file1)==1)
	{
		if(strcmp(s.phonenumber,pn)==0)
		{	system("cls");
			printf(" Record Found ");
			printf("\n\nPhonenumber: %s\nName: %s\nAmount: Rs.%0.2f\n",s.phonenumber,s.name,s.amount);
			//flag=0;
			break;
		}
		else 
		{	system("cls");
			printf("Requested Phone Number Not found in our database");
		}
	}
	getch();
	fclose(file1);
}
