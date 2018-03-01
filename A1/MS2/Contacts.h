/* -------------------------------------------
Name:           Cindy Le
Email:          cle15@myseneca.ca
Date:           Dec 7, 2017
Workshop:	Milestone 2
Description:	Contact System
---------------------------------------------- */
// Structure type Name declaration
struct Name {
	char firstName[31];
	char middleInitial[7];
	char lastName[36];
};

// Structure type Address declaration
struct Address {
	int streetNumber;
	char street[41];
	int apartmentNumber;
	char postalCode[8];
	char city[41];
};

// Structure type Numbers declaration
struct Numbers {
	char cell[21];
	char home[21];
	char business[21];
};

// Structure type Contact declaration
struct Contact {
	struct Name name;
	struct Address address;
	struct Numbers numbers;
};

// Get and store from standard input the values for Name
void getName(struct Name*);

// Get and store from standard input the values for Address
void getAddress(struct Address*);

// Get and store from standard input the values for Numbers
void getNumbers(struct Numbers*);
