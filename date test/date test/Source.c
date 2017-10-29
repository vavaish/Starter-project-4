#include "stdio.h"
#include "stdlib.h"
#define MAX_LENGHT 256
struct calendar {
	int days;
	int month;
	int years;
	char array1[MAX_LENGHT];
	char array2[MAX_LENGHT];
	char array3[MAX_LENGHT];


};
int main() {
	struct calendar h;
	int getch();
	int putch();
	int i = 0;
	int counter = 0;
	
	do {
		do {
			h.days = getch();

			if (counter < 2) {
				if (h.days >= '0'&&h.days <= '9') {
					h.array1[counter] = h.days;
					counter++;
					h.array1[counter] = '\0';
					putch(h.days);

				}
			}
		} while (h.days != 32);

		do {
			h.month = getch();

			if (counter < 4) {
				if (h.month >= '0'&&h.month <= '9') {
					h.array2[counter] = h.month;
					counter++;
					h.array2[counter] = '\0';
					putch(h.month);

				}
			}
		} while (h.month != 32);
		do {
			h.years = getch();

			if (counter < 8) {
				if (h.years >= '0'&&h.years <= '9') {
					h.array3[counter] = h.years;
					counter++;
					h.array3[counter] = '\0';
					putch(h.years);

				}
			}
		} while (h.years != 32);
		if (h.days <= 51 && counter == 1||h.days<=49 &&counter==2) {
			if (h.days <= 50&& counter == 1 || h.days <= 57 &&counter == 2) {



			}
			else {
				printf("no such date!");
			}
		}
		else {
			printf("no such date!");
		}


	} while (counter!=8);
	system("pause");
	return 0;
}