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

void nameInput(void);
void addressInput(void);
void numbersInput(void);
void displaySummary(void);

struct Name name[COUNT] = { { { 0 } } };
struct Address address[COUNT] = { { 0 } };
struct Numbers numbers[COUNT] = { { { 0 } } };

char firstName[31], middleInitial[7], lastName[36];
int streetNumber, apartmentNumber;
char street[41], postalCode[8], city[41];
char cell[21], home[21], business[21];
int i = 0;
char r, temp;

int main(void) {
	printf("Contact Management System\n");
	printf("-------------------------\n");

	nameInput();
	addressInput();
	numbersInput();
	displaySummary();

	printf("Structure test for Name, Address, and Numbers Done!\n");
	return 0;
}

void nameInput() {
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
void addressInput() {
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

void numbersInput() {
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
		printf("Please enter the contact's business phone number: ");
		scanf("%20s", numbers[i].business);
	}
}

void displaySummary() {
	printf("\nContact Details\n");
	printf("---------------\n");
	printf("Name Details\n");
	for (i = 0; i < COUNT; i++) {
		printf("First name: %s\n", name[i].firstName);
		printf("Middle initial(s): %s\n", name[i].middleInitial);
		printf("Last name: %s\n", name[i].lastName);
	}
	printf("\nAddress Details\n");
	for (i = 0; i < COUNT; i++) {
		printf("Street number: %d\n", address[i].streetNumber);
		printf("Street name: %s\n", address[i].street);
		printf("Apartment: %d\n", address[i].apartmentNumber);
		printf("Postal code: %s\n", address[i].postalCode);
		printf("City: %s\n", address[i].city);
	}
	printf("\nPhone Numbers:\n");
	for (i = 0; i < COUNT; i++) {
		printf("Cell phone number: %s\n", numbers[i].cell);
		printf("Home phone number: %s\n", numbers[i].home);
		printf("Business phone number: %s\n", numbers[i].business);
		printf("\n");
	}
}
