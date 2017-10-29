#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#define MAX_LENGHT 256
struct dates {
	int date;
	int month;
	int year;
};
void lenght(char a, int counter, char string[MAX_LENGHT]);
void position(char string[MAX_LENGHT], int counter, int a);
void calendar(int counter);
void NumberLenght(int a, int counter, char string[MAX_LENGHT]);
int main() {
	int counter=0;
	char string[MAX_LENGHT];
	char x = '-';
	int a=0;

	int input = 0;
	
		do {
				printf("|------------------------------|\n");
				printf("|Validate position:        (1.)|\n");
				printf("|Validate lenght:          (2.)|\n");
				printf("|Validate Number lenght:   (3.)|\n");
				printf("|Validate date:            (4.)|\n");
				printf("|Exit:                     (5.)|\n");
				printf("|------------------------------|\n");
				printf("Type in:");
				input = getchar();
if (input >= '0'&&input <= '4') {
				getchar();

				switch (input) {
					
				case '1':
					position(string, counter,   a);

					break;
				case '2':
					lenght(a, counter, string);
					break;
				case '3':
					NumberLenght(a, counter, string);

					break;
				case '4':
					calendar(counter);
					break;
				case '5':
					exit(0);
					break;
					}
}
else { break; }
		} while (input != '4');
	
	system("pause");
	return 0;
}
void calendar(int  counter) {
	struct dates taker;
	counter = 0;
	do {
		printf("Validation: D/M/Y:\n");
		scanf("%d/%d/%d", &taker.date, &taker.month, &taker.year);
		if (taker.month >= 1 && taker.month <= 12) {
			if (taker.date >= 1 && taker.date <= 31) {
				if (taker.year >= 0 && taker.year <= 100000) {
					if (taker.month >= 1 && taker.month <= 12) {
						if ((taker.date >= 1 && taker.date <= 31) && (taker.month == 1 || taker.month == 3 || taker.month == 5 || taker.month == 7 || taker.month == 8 || taker.month == 10 || taker.month == 12)) {
							counter++;
						}
						if ((taker.date >= 1 && taker.date <= 30) && (taker.month == 4 || taker.month == 6 || taker.month == 9 || taker.month == 11)) {
							counter++;
						}
						if ((taker.date >= 1 && taker.date <= 28) && (taker.month == 2)) {
							counter++;
						}
						if (taker.date == 29 && taker.month == 2 && (taker.year % 400 == 0 || (taker.year % 4 == 0 && taker.year % 100 != 0))) {
							counter++;
						}
						if (counter> 0) {
							printf("The date exists!\n"); 
						}
						else {
							printf("Date doesn't exist!\n");  
						}

					}
					else { printf("Unexisting month!\n");  
					}

				}
				else {
					printf("Unexisting year!\n");
				}
			}
			else {
				printf("No date inserted!\n"); 
			}
		}
		else {
			printf("No month inserted!\n"); 
		}

	} while (counter != 1);
}
void position(char string[MAX_LENGHT],int counter,int a) {
	
	int getch();
	int putch();
   counter = 0;
   char x = '-';
	
	printf("First symbol starts with Cappital letter and second symbol must be Number\n");
	printf("Example: [X2-X2-X2-X2-X2-X2] \n");
	printf("Insert MAC address: \n");
	printf("-->");
	do{
		a = getch();

		if (counter <12) {
			if (((a >= 'A'&&a <= 'Z') && (counter % 2 == 0)) || ((a >= 47 && a <= 58) && (counter % 2 == 1))) {

				string[counter] = a;
				counter++;
				string[counter] = '\0';
				putch(a);
		
		
			}
			 if (a==8) {
				 counter--;
				 if (counter < 0)
					 counter++;
				 else
					 printf("\b \b");

			}

		}
		else {
			if (a == 8) {
				counter--;
				if (counter < 0)
					counter++;
				else
					printf("\b \b");

			}

		}



	} while (a != '\r');

	
	printf("\nAdress:%s\n",string);
}
void lenght(char a, int counter , char string[MAX_LENGHT]) {
	counter = 0;
	int getch();
	int putch();
	printf("|-------------------------------|\n");
	printf("|Password lenght is 10 symbols. |\n");
	printf("|[Enter password]               |\n");
	printf("[>>:");
	do{
		a = getch();
		
		if(counter<10){
		if ((a >= 'a'&&a <= 'z') || (a >= 'A'&&a <= 'Z')) {


			string[counter] = a;
			
			counter++;
			string[counter] = '\0';
			
			putch(a);
		}

		if (a == 8) {
			counter--;
			if (counter < 0)
				counter++;
			else
				printf("\b \b");

		}
		}
		else {
			if(a == 8) {
				counter--;
				if (counter < 0)
					counter++;
				else
					printf("\b \b");

			}
		}
		
	} while (a != '\r');
	printf("\nPassword:%s\n",string);
	
	system("pause");
}
void NumberLenght(int a, int counter, char string[MAX_LENGHT]) {

	counter = 0;
	int getch();
	int putch();
	printf("Serial number contains 16 numeric code!\n");
	printf("Insert Serial number:");

	do {
		a = getch();
		if (counter< 16) {
			if (a >= 48 && a <= 57) {

				string[counter] = a;
				counter++;
				string[counter] = '\0';
				putch(a);

			}
		
			if (a == 8) {
				counter--;
				if (counter < 0)
					counter++;
				else
					printf("\b \b");

			}


		}
		else {
			if (a == 8) {
				counter--;
				if (counter < 0)
					counter++;
				else
					printf("\b \b");

			}
		}
		
		} while (a!='\r');
	
		printf("\nCode is:%s\n", string);
		system("pause");
	}
