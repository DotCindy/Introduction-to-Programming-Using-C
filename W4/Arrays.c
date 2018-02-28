/* -------------------------------------------
Name:                   Cindy Le
Email:                  cle15@myseneca.ca
Date:                   Oct 24, 2017
Workshop:		At Home
Description:		Temperature Analyzer V2.0
---------------------------------------------- */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMS 10

int size;
int i;
int high[NUMS], low[NUMS];
int day;
float average;

void title(void);
void setArray(void);
void enterValues(void);
void table(void);
void calcPositionHigh(void);
void calcPositionLow(void);
void enterDays(void);
void averageTemp(void);

int main(void) {
	title();
	setArray();
	enterValues();
	table();
	calcPositionHigh();
	calcPositionLow();
	enterDays();
	averageTemp();
	return 0;
}

void title() {
	printf("---=== IPC Temperature Calculator V2.0 ===---\n");
}

void setArray() {
	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &size);
	printf("\n");
	while (size < 3 || size > 10) {
		printf("Invalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &size);
		printf("\n");
	}
}

void enterValues() {
	for (i = 0; i < size; i++) {
		printf("Day %d - High: ", i + 1);
		scanf("%d", &high[i]);
		printf("Day %d - Low: ", i + 1);
		scanf("%d", &low[i]);
	}
}

void table() {
	printf("\nDay  Hi  Low\n");
	for (i = 0; i < size; i++) {
		printf("%d    %d    %d\n", i + 1, high[i], low[i]);
	}
}

void enterDays() {
	printf("\nEnter a number between 1 and %d to see the average temperature for the entered number of days, enter a negative number to exit: ", size);
	scanf("%d", &day);
	if (day < 0) {
		printf("\nGoodbye!\n");
		return;
	}
	else if (day > size) {
		printf("\nInvalid entry, please enter a number between 1 and %d, inclusive: ", size);
		scanf("%d", &day);
	}
	else {
		return averageTemp();
	}
}

void calcPositionHigh() {
	int max, location_high = 1;
	max = high[0];
	for (i = 1; i < NUMS; i++) {
		if (high[i] > max) {
			max = high[i];
			location_high = i + 1;
		}
	}
	printf("\nThe highest temperature was %d, on day %d\n", max, location_high);
}

void calcPositionLow() {
	int min, location_low = 1;
	min = low[0];
	for (i = 1; i < NUMS; i++) {
		if (low[i] < min) {
			min = low[i];
			location_low = i + 1;
		}
	}
	printf("The lowest temperature was %d, on day %d\n", min, location_low);
}

void averageTemp() {
	int total_high = 0, total_low = 0, total;
	for (i = 0; i < day; i++) {
		total_high = total_high + high[i];
		total_low = total_low + low[i];
		total = (float)total_high + (float)total_low;
		average = (float)total / (2 * day);
	}
	printf("\nThe average temperature up to day %d is: %1.2lf", day, average);
	printf("\n");
	return enterDays();
}
