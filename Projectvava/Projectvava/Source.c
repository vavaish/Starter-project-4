#include "Declarations.h"
#define FOREGROUND_WHITE 0x0007

void InitProgram(int argc, char *argv[]);
int GetKey();
void Gotoxy(int x, int y);
int main(int argc, char *argv[])
{
	system("COLOR 0A");
	int x = 28;
	int y = 3;
	int ch;
	int Larger = 0;
	int getch();
	int row = 5, col = 10;
	char temp= TOP_BOT;

	InitProgram(argc, argv);

	for (row = 1, col = 4; col<75; col++) {
		mainchInfo[row * coord.X + col].Char.AsciiChar = temp;
		mainchInfo[row * coord.X + col].Attributes = FOREGROUND_GREEN |  FOREGROUND_INTENSITY;

		put_screen(&coord, mainchInfo);
	}
	temp = TOP_LEFT;
	   row = 1; col = 4;
		mainchInfo[row * coord.X + col].Char.AsciiChar = temp;
		mainchInfo[row * coord.X + col].Attributes = FOREGROUND_GREEN | FOREGROUND_INTENSITY;

	put_screen(&coord, mainchInfo);
	
	temp = LEFT_RIGHT;
	for (row = 2, col = 4; row<24; row++) {
		mainchInfo[row * coord.X + col].Char.AsciiChar = temp;
		mainchInfo[row * coord.X + col].Attributes = FOREGROUND_GREEN | FOREGROUND_INTENSITY;

		put_screen(&coord, mainchInfo);
	}
	temp = BOT_left;
	    row = 24; col = 4;
		mainchInfo[row * coord.X + col].Char.AsciiChar = temp;
		mainchInfo[row * coord.X + col].Attributes = FOREGROUND_GREEN | FOREGROUND_INTENSITY;

		put_screen(&coord, mainchInfo);
	
		temp = TOP_BOT;
	for (row = 24, col = 5; col<75; col++) {
		mainchInfo[row * coord.X + col].Char.AsciiChar = temp;
		mainchInfo[row * coord.X + col].Attributes = FOREGROUND_GREEN | FOREGROUND_INTENSITY;

		put_screen(&coord, mainchInfo);
	}
	temp = BOT_RIGHT;
	row = 24; col = 75;
	mainchInfo[row * coord.X + col].Char.AsciiChar = temp;
	mainchInfo[row * coord.X + col].Attributes = FOREGROUND_GREEN | FOREGROUND_INTENSITY;

	put_screen(&coord, mainchInfo);
	temp = TOP_RIGHT;
	row = 1; col = 75;
	mainchInfo[row * coord.X + col].Char.AsciiChar = temp;
	mainchInfo[row * coord.X + col].Attributes = FOREGROUND_GREEN | FOREGROUND_INTENSITY;

	put_screen(&coord, mainchInfo);
	temp = LEFT_RIGHT;
	for (row = 2, col = 75; row<24; row++) {
		mainchInfo[row * coord.X + col].Char.AsciiChar = temp;
		mainchInfo[row * coord.X + col].Attributes = FOREGROUND_GREEN | FOREGROUND_INTENSITY;

		put_screen(&coord, mainchInfo);
	}

temp = RECTANGLE;

	do {
		printf("<<Select Option>>");
		ch = getch();
		if (ch == 224 || ch == 72) {
			if (y == 3) {
				y = 23+5;
				
			}
			y-=5;

		}
		if (ch == 224 || ch == 80) {
			if (y ==23) {
				y = 3-5;
				
			}
			y+=5;
		}
	

		if (y == 3) {

		
			for (row = 3, col = 28; col < 50; col++) {
				mainchInfo[row * coord.X + col].Char.AsciiChar = temp;
				mainchInfo[row * coord.X + col].Attributes = FOREGROUND_WHITE | FOREGROUND_INTENSITY;

				put_screen(&coord, mainchInfo);
			}
			col = 47;
			mainchInfo[row * coord.X + col].Char.AsciiChar = '1';
			mainchInfo[row * coord.X + col].Attributes = FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN;

			put_screen(&coord, mainchInfo);
		
		}
		else {

		
			for (row = 3, col = 28; col<50; col++) {
				mainchInfo[row * coord.X + col].Char.AsciiChar = temp;
				mainchInfo[row * coord.X + col].Attributes = FOREGROUND_BLUE | FOREGROUND_INTENSITY;

				put_screen(&coord, mainchInfo);
			}
			col = 47;
			mainchInfo[row * coord.X + col].Char.AsciiChar = '1';
			mainchInfo[row * coord.X + col].Attributes = FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN;

			put_screen(&coord, mainchInfo);

		}
		if (y == 8) {

		
			for (row = 8, col = 28; col < 50; col++) {
				mainchInfo[row * coord.X + col].Char.AsciiChar = temp;
				mainchInfo[row * coord.X + col].Attributes = FOREGROUND_WHITE | FOREGROUND_INTENSITY;

				put_screen(&coord, mainchInfo);
			}
				col = 47;
				mainchInfo[row * coord.X + col].Char.AsciiChar = '2';
				mainchInfo[row * coord.X + col].Attributes = FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN;

				put_screen(&coord, mainchInfo);
			}
		
		else {

			
			for (row = 8, col = 28; col<50; col++) {
				mainchInfo[row * coord.X + col].Char.AsciiChar = temp;
				mainchInfo[row * coord.X + col].Attributes = FOREGROUND_BLUE | FOREGROUND_INTENSITY;

				put_screen(&coord, mainchInfo);
			}
			col = 47;
			mainchInfo[row * coord.X + col].Char.AsciiChar = '2';
			mainchInfo[row * coord.X + col].Attributes = FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN;

			put_screen(&coord, mainchInfo);

		}
		if (y == 13) {

			
			for (row = 13, col = 28; col < 50; col++) {
				mainchInfo[row * coord.X + col].Char.AsciiChar = temp;
				mainchInfo[row * coord.X + col].Attributes = FOREGROUND_WHITE | FOREGROUND_INTENSITY;

				put_screen(&coord, mainchInfo);
			}
			col = 47;
			mainchInfo[row * coord.X + col].Char.AsciiChar = '3';
			mainchInfo[row * coord.X + col].Attributes = FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN;

			put_screen(&coord, mainchInfo);
		}
		else {


			
			for (row = 13, col = 28; col<50; col++) {
				mainchInfo[row * coord.X + col].Char.AsciiChar = temp;
				mainchInfo[row * coord.X + col].Attributes = FOREGROUND_BLUE | FOREGROUND_INTENSITY;

				put_screen(&coord, mainchInfo);
			}
			col = 47;
			mainchInfo[row * coord.X + col].Char.AsciiChar = '3';
			mainchInfo[row * coord.X + col].Attributes = FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN;

			put_screen(&coord, mainchInfo);

		}
		if (y == 18) {

			
			for (row = 18, col = 28; col<50; col++) {
				mainchInfo[row * coord.X + col].Char.AsciiChar = temp;
				mainchInfo[row * coord.X + col].Attributes = FOREGROUND_WHITE | FOREGROUND_INTENSITY;

				put_screen(&coord, mainchInfo);
			}
			col = 47;
			mainchInfo[row * coord.X + col].Char.AsciiChar = '4';
			mainchInfo[row * coord.X + col].Attributes = FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN;

			put_screen(&coord, mainchInfo);

		}
		else {
			
			for (row = 18, col = 28; col<50; col++) {
				mainchInfo[row * coord.X + col].Char.AsciiChar = temp;
				mainchInfo[row * coord.X + col].Attributes = FOREGROUND_BLUE | FOREGROUND_INTENSITY;

				put_screen(&coord, mainchInfo);
			}
			col = 47;
			mainchInfo[row * coord.X + col].Char.AsciiChar = '4';
			mainchInfo[row * coord.X + col].Attributes = FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN;

			put_screen(&coord, mainchInfo);

		}
		if (y == 23) {


		
			for (row = 23, col = 28; col<50; col++) {
				mainchInfo[row * coord.X + col].Char.AsciiChar = temp;
				mainchInfo[row * coord.X + col].Attributes = FOREGROUND_WHITE | FOREGROUND_INTENSITY;

				put_screen(&coord, mainchInfo);
			}
			col = 47;
			mainchInfo[row * coord.X + col].Char.AsciiChar = '5';
			mainchInfo[row * coord.X + col].Attributes = FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN;

			put_screen(&coord, mainchInfo);

		}
		else {


		
			for (row = 23, col = 28; col<50; col++) {
				mainchInfo[row * coord.X + col].Char.AsciiChar = temp;
				mainchInfo[row * coord.X + col].Attributes = FOREGROUND_BLUE | FOREGROUND_INTENSITY;

				put_screen(&coord, mainchInfo);
			}
			col = 47;
			mainchInfo[row * coord.X + col].Char.AsciiChar = '5';
			mainchInfo[row * coord.X + col].Attributes = FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_GREEN;

			put_screen(&coord, mainchInfo);

		}



		Gotoxy(x, y);
	} while (ch != ' ');

	system("pause");
	GetKey();
	clrScr();
	
	return 1;
}

int GetKey()
{
	int getch();
	int ch;
	ch = getch();
	if (ch == 0 || ch == 224) {
		ch = getch();
		ch += 256;
	}
	return ch;
}

void InitProgram(int argc, char *argv[])
{

	mainchInfo = get_screen(&coord);

	init_console(KBValue);
}
void Gotoxy(int x, int y)

{

	COORD scrn;

	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);

	scrn.X = x; scrn.Y = y;

	SetConsoleCursorPosition(hOuput, scrn);

}
