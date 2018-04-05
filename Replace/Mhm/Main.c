#include "stdio.h"
#include "conio.h"
#include "string.h"
#include "stdlib.h"
#define SIZE 256
int GetKey();

int main()
{
	int pos=0;
	int ch;
	char string[SIZE]=" ";
	
	while (1)
	{
		ch = _getch();
		if ((ch >= '0') && (ch <= '9'))
		{
			string[pos] = ch;
			_putch(string[pos]);
			pos++;
		}
		if ((pos >= 10) || (ch == '\r'))
		{
			break;
		}
		if ((ch == 8) && (pos > 0))
		{
			_putch('\b');
			_putch(' ');
			_putch('\b');
			pos--;
			string[pos] = '\0';
		}
		if (ch == 75 || ch == 224)
		{
			_putch('\b');
			pos--;
		}
		if (ch == 77||ch==224)
		{
			_putch(string[pos]);
			pos++;
		}
	}
	printf("\n%s",string);
	string[pos] = '\0';
	system("pause");
	GetKey();
	return 0;
}
int GetKey()
{
	int ch;
	ch = _getch();
	if (ch == 0 || ch == 224) {
		ch = _getch();
		ch += 256;
	}
	return ch;
}
