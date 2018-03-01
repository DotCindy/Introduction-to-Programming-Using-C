/* -------------------------------------------
Name:           Cindy Le
Email:          cle15@myseneca.ca
Date:           Dec 20, 2017
Workshop:	      Milestone 2
Description:	  More Contact System
---------------------------------------------- */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the functions you prototyped
//       in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:
#include "contactHelpers.h"

//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | Put empty function definitions below...         |
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+

// clearKeyboard:  Empty function definition 
void clearKeyboard(void) {
	while (getchar() != '\n');
}

void flushKeyboard(void) {
	char newline = 0;
	while (newline != '\n') {
		scanf("%c", &newline);
	}
}

// pause: Empty function definition goes here:
void pause(void) {
	printf("(Press Enter to Continue)");
	flushKeyboard();
}

// getInt: Empty function definition goes here:
int getInt(void) {
	int value;
	char newline = 0;
	do {
		scanf("%d%c", &value, &newline);
		if (newline != '\n') {
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
			clearKeyboard();
		}
	} while (newline != '\n');
	return value;
}

// getIntInRange: Empty function definition goes here:
int getIntInRange(int min, int max) {
	int num;
	do {
		num = getInt();
		if (num < min || num > max) {
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
		}
	} while (num < min || num > max);
	return num;
}

// yes: Empty function definition goes here:
int yes(void) {
	char value;
	char newline = 0;
	do {
		scanf("%c%c", &value, &newline);
		if (!(value == 'y' || value == 'Y' || value == 'n' || value == 'N') || newline != '\n') {
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
			if (newline != '\n') flushKeyboard();
		}
	} while (!(value == 'y' || value == 'Y' || value == 'n' || value == 'N') || newline != '\n');
	if (newline != '\n') flushKeyboard();
	return value == 'y' || value == 'Y';
}

// menu: Empty function definition goes here:
int menu(void) {
	int selection;
	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n\n");
	printf("Select an option:> ");
	selection = getIntInRange(0,6);
	return selection;
}

// ContactManagerSystem: Empty function definition goes here:
void ContactManagerSystem(void) {
	int option;
	char term;
	LOOP:do {
		option = menu();
		switch (option) {
		case 0:
			printf("\nExit the program? (Y)es/(N)o: ");
			scanf("%c", &term);
			if (term == 'y' || term == 'Y') {
				printf("\nContact Management System: terminated\n");
				return;
			}
			else if (term == 'n' || term == 'N') {
				printf("\n");
				goto LOOP;
			}
		case 1:
			printf("\n<<< Feature 1 is unavailable >>>\n\n");
			pause();
			break;
		case 2:
			printf("\n<<< Feature 2 is unavailable >>>\n\n");
			pause();
			break;
		case 3:
			printf("\n<<< Feature 3 is unavailable >>>\n\n");
			pause();
			break;
		case 4:
			printf("\n<<< Feature 4 is unavailable >>>\n\n");
			pause();
			break;
		case 5:
			printf("\n<<< Feature 5 is unavailable >>>\n\n");
			pause();
			break;
		case 6:
			printf("\n<<< Feature 6 is unavailable >>>\n\n");
			pause();
			break;
		default:
			printf("Nothing...");
		}
		printf("\n");
	} while (option >= 0 || option <= 6);
}
