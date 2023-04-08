/*
Event Manager Things to Implement:

- Event Atendee Login / Register
	> User name (used for Login)
	> First - Last name
	> Password (used for Login)

- Event Administrator Login / Register (Requires Key word *Encryptied?*)
	> User Name (used for Login)
	> First - Last name
	> Password  (used for Login)
	> Special Key (used for Login)

- Display of events: (In a CSV File)
	> Name of the Event
	> Location of the event
	> Owner of the event
	> Number of attendees acceptable
	> Date
	> Avaliable spots remeaning?
	> Cost?
	% SEARCH:
		% Search for Name of Event
		% Search for Owner of the Event

- Attendees Log: (In TXT File)
	% Only Administrator Can view (No editing by administrator)
	% Attendees are put here
	> Attendees Name
	> Registered Event
	> Registered Date
	> Event Date
	> Special receipt code for the Attendee
	% SORT:
		% Sort by event name + Sort by date

- Attendees Profile Log: (In TXT File)
	> User name
	> First - Last name
	> Password

- Administrator Profile Log: (In TXT File) (No access)
	> User Name
	> First - Last name
	> Password
	> Special Key

- Job of Administrator:
	> Add / Delete / Edit events
	% Deleting events effect Attendees Log
	> View attendees log
	> Delete Attendees profiles?

- Job of Attendees:
	> Check Events Happening
	> Register For events
	> Get a receipt for events
	> After receipt put in the Attendees Log
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Loginmain();
void Registermain();
void ATmenu(char Username[20]);
void ADmenu(char Username[20]);

int main() {
	int option;
	printf("\n----------------------------- Welcome to Event Manager! -----------------------------\n");
	printf("By Tevfik Gulbent\n\n\n");
	printf("Get Started: \n1-Login\n2-Register\n\n");
	scanf_s("%d", &option);

	switch (option)
	{
	case 1:
		Loginmain();
		break;
	case 2:
		Registermain();
		break;
	default:
		printf("Wrong input exiting the program");
		break;
	}
	return 0;
}

void ATmenu() {
	;
}

void ADmenu() {
	;
}
void Loginmain() {
	system("cls");
	int option;
	char Firstname[20];
	char Lastname[20];
	char Username[20];
	char Password[20];
	char temp[30];
	char Keytemp[20];
	char Key[20] = "TEST";
	printf("\n----------------------------- Register Menu -----------------------------\n");
	printf("Pick One: \n1- Attendee Register\n2- Administrator Register (Requires Key)\n\n");
	scanf_s("%d", &option);

	switch (option)
	{
	case 1:
		do
		{
			printf("\Login for Attendee:\n");
			printf("\nUsername: ");
			scanf_s(" %s", Username, sizeof Username);
			printf("\nPassword: ");
			scanf_s(" %s", Password, sizeof Password);

			if (strcmp(Password, temp) == 0) {
				//checkusername(option, usernamen password);
				//checkpsswd();
				//ATmenu(Username);
			}
			else {
				printf("Password is not correct, try again");
			}
		} while (true);
		break;

	case 2:
		do
		{
			printf("\Login for Administrator:\n");
			printf("\nUsername: ");
			scanf_s(" %s", Username, sizeof Username);
			printf("\nPassword: ");
			scanf_s(" %s", Password, sizeof Password);
			printf("\nSpecial Key: ");
			scanf_s(" %s", Keytemp, sizeof Keytemp);
			if (strcmp(Key, Keytemp) == 0)
			{
				if (strcmp(Password, temp) == 0) {
					//checkusername();
					//checkpsswd();
					//ADmenu(Username);
				}
				else {
					printf("Password is not correct, try again");
				}
			}

		} while (true);
		break;
	default:
		printf("Wrong input exiting the program");
		break;
	}
}

void Registermain() {
	system("cls");
	int option;
	char Firstname[20];
	char Lastname[20];
	char Username[20];
	char Password[20];
	char temp[30];
	char Keytemp[20];
	char Key[20]= "TEST";
	printf("\n----------------------------- Register Menu -----------------------------\n");
	printf("Pick One: \n1- Attendee Register\n2- Administrator Register (Requires Key)\n\n");
	scanf_s("%d", &option);

	switch (option)
	{
	case 1:
		do
		{	
		printf("\nRegister for Attendee:\n");
		printf("\nFirst name: ");
		scanf_s(" %s", Firstname, sizeof Firstname);
		printf("\nLast name: ");
		scanf_s(" %s", Lastname, sizeof Lastname);
		printf("\nUsername: ");
		scanf_s(" %s", Username, sizeof Username);
		printf("\nPassword: ");
		scanf_s(" %s", Password, sizeof Password);
		printf("\nre-type Password: ");
		scanf_s(" %s", temp, sizeof temp);
		
		if (strcmp(Password,temp)==0) {
			//checkusername();
			//saveAT();
			main();
		}
		else {
			printf("Password is not correct, try again");
		}
		} while (true);
		break;
	case 2:
		do
		{
			printf("\nRegister for Administrator:\n");
			printf("\nFirst name: ");
			scanf_s(" %s", Firstname, sizeof Firstname);
			printf("\nLast name: ");
			scanf_s(" %s", Lastname, sizeof Lastname);
			printf("\nUsername: ");
			scanf_s(" %s", Username, sizeof Username);
			printf("\nPassword: ");
			scanf_s(" %s", Password, sizeof Password);
			printf("\nre-type Password: ");
			scanf_s(" %s", temp, sizeof temp);
			printf("\nSpecial Key: ");
			scanf_s(" %s", Keytemp, sizeof Keytemp);
			if (strcmp(Key, Keytemp) == 0)
			{
				if (strcmp(Password, temp) == 0) {
					//checkusername();
					//saveAD();
					main();
				}
				else {
					printf("Password is not correct, try again");
				}
			}
			else
			{
				printf("Try again");
			}
			
		} while (true);
		break;
	default:
		printf("Wrong input exiting the program");
		break;
	}
}