/* -------------------------------------------
Name:           Cindy Le
Email:          cle15@myseneca.ca
Date:           Dec 20, 2017
Workshop:	      Milestone 2
Description:	  More Contact System
---------------------------------------------- */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:
#include "contacts.h"
#include "contactHelpers.h"

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-1 Milestone-4 |
// |        function definitions below...            |
// +-------------------------------------------------+

char firstName[31], middleInitial[7], lastName[36];
int streetNumber, apartmentNumber;
char street[41], postalCode[8], city[41];
int i = 0;
char r, temp;

void clear(void) {
	while (getchar() != '\n');
}

// getName:
void getName(struct Name *name) {
	printf("Please enter the contact's first name: ");
	scanf("%30s", name->firstName);
	clear();
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	if (yes() == 1) {
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6s", name->middleInitial);
	}
	printf("Please enter the contact's last name: ");
	scanf("%35s", name->lastName);
}

// getAddress:
void getAddress(struct Address *address) {
	printf("Please enter the contact's street number: one two\n");
	printf("*** INVALID INTEGER *** <Please enter an integer>: ");
	scanf("%d", &address->streetNumber);
	clear();
	printf("Please enter the contact's street name: ");
	scanf("%[^\n]", address->street);
	printf("Do you want to enter an apartment number? (y or n): ");
	if (yes() == 1) {
		printf("Please enter the contact's apartment number: ");
		apartmentNumber = getInt();
	}
	printf("Please enter the contact's postal code: ");
	scanf("%[^\n]", address->postalCode);
	printf("Please enter the contact's city: ");
	scanf("%40s", address->city);
}

// getNumbers:
void getNumbers(struct Numbers *numbers) {
	printf("Please enter the contact's cell phone number: ");
	scanf("%20s", numbers->cell);
	clear();
	printf("Do you want to enter a home phone number? (y or n): ");
	if (yes() == 1) {
		printf("Please enter the contact's home phone number: ");
		scanf("%20s", numbers->home);
	}
	printf("Do you want to enter a business phone number? (y or n): ");
	if (yes() == 1) {
		printf("Please enter the contact's business phone number: ");
		scanf("%20s", numbers->business);
	}
}


// +-------------------------------------------+
// | ====== Assignment 2 | Milestone 1 ======= |
// +-------------------------------------------+

// getContact:
// Define Empty function definition below:
void getContact(struct Contact *contact) {
	getName(&(contact->name));
	getAddress(&(contact->address));
	getNumbers(&(contact->numbers));
}
