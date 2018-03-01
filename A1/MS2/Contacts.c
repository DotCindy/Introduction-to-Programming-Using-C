/* -------------------------------------------
Name:           Cindy Le
Email:          cle15@myseneca.ca
Date:           Dec 7, 2017
Workshop:	Milestone 2
Description:	Contact System
---------------------------------------------- */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contacts.h"
#define COUNT 1

char firstName[31], middleInitial[7], lastName[36];
int streetNumber, apartmentNumber;
char street[41], postalCode[8], city[41];
char cell[21], home[21], business[21];
char r, temp;

// Get and store from standard input the values for Name
void getName(struct Name* name) {
	printf("Please enter the contact's first name: ");
	scanf("%30s", name[i].firstName);
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &r);
	if (r == 'y' || r == 'Y') {
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6s", name[i].middleInitial);
	}
	printf("Please enter the contact's last name: ");
	scanf("%35s", name[i].lastName);
}

// Get and store from standard input the values for Address
void getAddress(struct Address* address) {
	printf("Please enter the contact's street number: ");
	scanf("%d", &address[i].streetNumber);
	printf("Please enter the contact's street name: ");
	scanf("%40s", address[i].street);
	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &r);
	if (r == 'y' || r == 'Y') {
		printf("Please enter the contact's apartment number: ");
		scanf("%d", &address[i].apartmentNumber);
	}
	printf("Please enter the contact's postal code: ");
	scanf("%c", &temp);
	scanf("%[^\n]",address[i].postalCode);
	printf("Please enter the contact's city: ");
	scanf("%40s", address[i].city);
}

// Get and store from standard input the values for Numbers
void getNumbers(struct Numbers* numbers) {
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &r);
	if (r == 'y' || r == 'Y') {
		printf("Please enter the contact's cell phone number: ");
		scanf("%20s", numbers[i].cell);
	}
	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &r);
	if (r == 'y' || r == 'Y') {
		printf("Please enter the contact's home phone number: ");
		scanf("%20s", numbers[i].home);
	}
	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &r);
	if (r == 'y' || r == 'Y') {
		printf("Please enter the contact's buiness phone number: ");
		scanf("%20s", numbers[i].business);
	}
}
