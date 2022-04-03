#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include"deleterecords.h"
void deleterecords()
{
	FILE *file1,*file2;
	int i=1;
	char pn[20];
	if((file2=fopen("c:/temp.ojs","w+"))==NULL)
	exit(0);
	if((file1=fopen("c:/file.ojs","rb"))==NULL)
	exit(0);
	system("cls");
	printf("Enter the phone number to be deleted from the Database");
	//fflush(stdin);
	scanf("%4[^\n]",pn);
	while(fread(&s,sizeof(s),1,file1)==1)
	{
		if(strcmp(s.phonenumber,pn)==0)
		{       i=1;
			continue;

		}
		else
			fwrite(&s,sizeof(s),1,file2);
	}
	if(i==1)
	{       system("cls");
		printf("Phone number \"%s\"  found",pn);
		remove("c:/file.ojs");
		rename("c:/temp.ojs","c:/file.ojs");
		getch();
		fclose(file1);
		fclose(file2);
		//main();
	}else
		printf("Phone number \"%s\" not found",pn);
	remove("c:/file.ojs");
	rename("c:/temp.ojs","c:/file.ojs");
	system("cls");
	printf("The Number %s Successfully Deleted!!!!",pn);
	fclose(file1);
	fclose(file2);
	getch();
}
