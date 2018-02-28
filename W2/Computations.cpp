/* -------------------------------------------
Name:                   Cindy Le
Email:                  cle15@myseneca.ca
Date:                   Sep 22, 2017
Workshop:		at_home.cpp
---------------------------------------------- */
#include <stdio.h>

double amt;
int n_loonies, n_quarters, n_dimes, n_nickels, n_pennies;
double remaining;
double gst;
double bal;

void enterAmount(void);
void calcGst(void);
void calcLoonies(void);
void calcQuarters(void);
void calcDimes(void);
void calcNickels(void);
void calcPennies(void);

int main(void) {
	enterAmount();
	calcGst();
	calcLoonies();
	calcQuarters();
	calcDimes();
	calcNickels();
	calcPennies();
	return 0;
}

void enterAmount() {
	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amt);
}

void calcGst() {
	gst = amt * 0.13 + 0.005;
	bal = amt + gst;
	printf("GST: %1.2lf\n", gst);
	printf("Balance owing: $%1.2lf\n", bal);
}

void calcLoonies() {
	n_loonies = bal / 1;
	remaining = bal - n_loonies;
	printf("Loonies required: %d, balance owing $%1.2lf\n", n_loonies, remaining);
}

void calcQuarters() {
	n_quarters = remaining / 0.25;
	remaining = (int)(remaining * 100) % 25;
	printf("Quarters required: %d, balance owing $%1.2lf\n", n_quarters, (double)remaining/100);
}

void calcDimes() {
	n_dimes = remaining / 10;
	remaining = remaining - (n_dimes * 10);
	printf("Dimes required: %d, balance owing $%1.2lf\n", n_dimes, (double)remaining/100);
}

void calcNickels() {
	n_nickels = remaining / 5;
	remaining = (int)remaining % 5;
	printf("Nickels required: %d, balance owing $%1.2lf\n", n_nickels, (double)remaining/100);
}

void calcPennies() {
	n_pennies = remaining;
	remaining = remaining - n_pennies;
	printf("Pennies required: %d, balance owing $%1.2lf\n", n_pennies, (double)remaining/100);
}
