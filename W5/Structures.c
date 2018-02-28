
/* -------------------------------------------
Name:                   Cindy Le
Email:                  cle15@myseneca.ca
Date:                   Oct 25, 2017
Workshop:		            At Home
Description:		        Employee Data
---------------------------------------------- */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 4

void display(void);
void add(void);
void update(void);
void removeEmp(void);

int i, count;
int id, loc;
int flag = 0;

struct Employee {
	int id;
	int age;
	double salary;
};

struct Employee emp[SIZE] = {{0}};

int main() {
	int option = 0;
	printf("---=== EMPLOYEE DATA ===---\n\n");

	do {
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");

		scanf("%d", &option);
		printf("\n");

		switch (option) {
		case 0:
			printf("Exiting Employee Data Program. Good Bye!!!\n");
			break;
		case 1:
			display();
			break;
		case 2:
			add();
			break;
		case 3:
			update();
			break;
		case 4:
			removeEmp();
			break;
		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}
	} while (option != 0);
	return 0;
}

void display() {
	printf("EMP ID  EMP AGE EMP SALARY\n");
	printf("======  ======= ==========\n");
	for (i = 0; i < count; i++) {
		printf("%6d%9d%11.2lf\n", emp[i].id, emp[i].age, emp[i].salary);
	}
	printf("\n");
}

void add() {
	if (count == SIZE) {
		printf("Adding Employee\n");
		printf("===============\n");
		printf("ERROR!!! Maximum Number of Employees Reached\n\n");
		return;
	}
	printf("Adding Employee\n");
	printf("===============\n");
	printf("Enter Employee ID: ");
	scanf("%d", &emp[i].id);
	printf("Enter Employee Age: ");
	scanf("%d", &emp[i].age);
	printf("Enter Employee Salary: ");
	scanf("%lf", &emp[i].salary);
	printf("\n");
	count++;
	i++;
}

void update() {
	printf("Update Employee Salary\n");
	printf("======================\n");
	printf("Enter Employee ID: ");
	scanf("%d", &id);
	i = 0;
	while (i < SIZE && id != emp[i].id) {
		i++;
	}
	printf("The current salary is %.2lf\n", emp[i].salary);
	printf("Enter Employee New Salary: ");
	scanf("%lf", &emp[i].salary);
	printf("\n");
}

void removeEmp() {
	printf("Remove Employee\n");
	printf("===============\n");
	printf("Enter Employee ID: ");
	scanf("%d", &id);
	printf("Employee %d will be removed\n\n", id);
	for (i = 0; i < count; i++) {
		if (emp[i].id == id) {
			flag = 1;
			loc = i;
		}
	}
	if (flag == 1) {
		for (i = loc; i < count - 1; i++) {
			emp[i].id = emp[i + 1].id;
			emp[i].age = emp[i + 1].age;
			emp[i].salary = emp[i + 1].salary;
		}
	}
	count--;
}
