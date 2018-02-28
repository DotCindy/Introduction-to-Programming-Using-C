/* -------------------------------------------
Name:                   Cindy Le
Email:                  cle15@myseneca.ca
Date:                   Sep 27, 2017
Workshop:		At Home
Description:		Temperature Analyzer
---------------------------------------------- */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMS 4

int i;
int high[NUMS], low[NUMS];
int total_high = 0;
int total_low = 0;
int total;
double average;
int max, min;
int location_high = 1, location_low = 1;

void title(void);
void enterValues(void);
void calcAverage(void);
void calcPositionHigh(void);
void calcPositionLow(void);

int main(void) {
	title();
	enterValues();
	calcAverage();
	calcPositionHigh();
	calcPositionLow();
	return 0;
}

void title() {
	printf("---=== IPC Temperature Analyzer ===---\n");
}

void enterValues() {
	for (i = 0; i < NUMS; i++) {
	LOOP:printf("Enter the high value for day %d: ", i + 1);
	scanf("%d", &high[i]);
	printf("\n");
	printf("Enter the low value for day %d: ", i + 1);
	scanf("%d", &low[i]);
	printf("\n");
	while ((low[i] < -40 || low[i] > 40) || (high[i] < -40 || high[i] > 40) || (low[i] > high[i])) {
		printf("Incorrect values, temperature must be in the range -40 to 40, high must be greater than low.\n\n");
		goto LOOP;
		}
	total_high = total_high + high[i];
	total_low = total_low + low[i];
	}
}

void calcAverage() {
	total = (float)total_high + (float)total_low;
	average = (float)total / (2 * NUMS);
	printf("The average (mean) temperature was: %1.2lf\n", average);
}

void calcPositionHigh() {
	max = high[0];
	for (i = 1; i < NUMS; i++) {
		if (high[i] > max) {
			max = high[i];
			location_high = i + 1;
		}
	}
	printf("The highest temperature was %d, on day %d\n", max, location_high);
}

void calcPositionLow() {
	min = low[0];
	for (i = 1; i < NUMS; i++) {
		if (low[i] < min) {
			min = low[i];
			location_low = i + 1;
		}
	}
	printf("The lowest temperature was %d, on day %d\n", min, location_low);
}
