#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<Structure.h>
//#include"C:\Users\mohan\Desktop\TelcomBilling\inc\Structure.h"
#include"addrecords.c"
#include"payment.c"
#include"listrecords.c"
#include"modifyrecords.c"
#include"searchrecords.c"
#include"deleterecords.c"

void addrecords(); //Intializing addrecords function
void listrecords();
void modifyrecords();
void deleterecords();
void searchrecords();
void payment();
char get;

int main()
{	
		
	system("cls");

	printf("\n\n\n\n\n\n\n\n\n**************************************************************");
	printf("\n\t\t------WELCOME TO THE TELECOM BILLING MANAGEMENT SYSTEM---");
	printf("\n\t\t****************************************************************");
	//Sleep(2000);
	getch();
    system("cls");
	while (1)
	{
		system("cls");
		printf("\n Enter\n A : for New Phone number addition.\n L : list of eixting phone numbers");
		printf("\n M : for modify existing phone number.\n P : for bill payment");
		printf("\n S : for searching phone number.");
		printf("\n D : for deleting phone number.\n E : for close the program\n");
		char choice;
		choice=getche();
		choice=toupper(choice);
		switch(choice)
		{
			case 'P':
				payment();break;
			case 'A':
				addrecords();break;
			case 'L':
				listrecords();break;
			case 'M':
				modifyrecords();break;
			case 'S':
				searchrecords();break;
			case 'D':
				deleterecords();break;
			case 'E':
				system("cls");
				printf("\n\n\t\t\t\tTHANK YOU");
				printf("\n\n\n\n\n:\n\tFOR USING OUR SERVICE. Please come again");
				//Sleep(2000);
				exit(0);
				break;
			default:
				system("cls");
				printf("Incorrect Input");
				printf("\nAny key to continue");
				getch();
		}
	}
}