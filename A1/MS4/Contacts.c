/* -------------------------------------------
Name:           Cindy Le
Email:          cle15@myseneca.ca
Date:           Dec 18, 2017
Workshop:	      Milestone 4
Description:	  Contact System
---------------------------------------------- */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:
#include "contacts.h"

char firstName[31], middleInitial[7], lastName[36];
int streetNumber, apartmentNumber;
char street[41], postalCode[8], city[41];
int i = 0;
char r, temp;

void clear(void) {
	while (getchar() != '\n');
}

// Get and store from standard input the values for Name
// Put your code here that defines the Contact getName function:
void getName(struct Name *name) {
	printf("Please enter the contact's first name: ");
	scanf("%30s", name->firstName);
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &r);
	if (r == 'y' || r == 'Y') {
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6s", name->middleInitial);
	}
	printf("Please enter the contact's last name: ");
	scanf("%35s", name->lastName);
}


// Get and store from standard input the values for Address
// Put your code here that defines the Contact getAddress function:
void getAddress(struct Address *address) {
	printf("Please enter the contact's street number: ");
	scanf("%d", &address->streetNumber);
	printf("Please enter the contact's street name: ");
	scanf("%40s", address->street);
	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &r);
	if (r == 'y' || r == 'Y') {
		printf("Please enter the contact's apartment number: ");
		scanf("%d", &address->apartmentNumber);
	}
	clear();
	printf("Please enter the contact's postal code: ");
	scanf("%[^\n]", address->postalCode);
	printf("Please enter the contact's city: ");
	scanf("%40s", address->city);
}


// Get and store from standard input the values for Numbers
// Put your code here that defines the Contact getNumbers function:
void getNumbers(struct Numbers *numbers) {
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &r);
	if (r == 'y' || r == 'Y') {
		printf("Please enter the contact's cell phone number: ");
		scanf("%20s", numbers->cell);
	}
	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &r);
	if (r == 'y' || r == 'Y') {
		printf("Please enter the contact's home phone number: ");
		scanf("%20s", numbers->home);
	}
	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &r);
	if (r == 'y' || r == 'Y') {
		printf("Please enter the contact's business phone number: ");
		scanf("%20s", numbers->business);
	}
}
