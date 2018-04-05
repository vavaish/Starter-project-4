#include "stdio.h"
#include "conio.h"
#include "string.h"
#include "stdlib.h"
#define SIZE 256


int main()
{
	int pos=0;
	int ch;
	char string[SIZE]=" ";
	int i = 0;
	int len = 0;

	while (1)
	{
		ch = _getch();
		if ((ch>='0')&&(ch<='9'))
		{
			string[pos] = ch;
			_putch(string[pos]);
			pos++;
			
		}
		if ((pos>=10)|| (ch == '\r'))
		{
			break;
		}
	
		if ((ch == 8) && (pos > 0))
		{
			_putch('\b');
			_putch(' ');
			_putch('\b');
			pos--;
		}
		if (ch==75)
		{
			_putch('\b');
			pos--;
		}
		if (ch==77)
		{
			_putch(string[pos]);
			pos++;
		}
	}
	printf("\n%s",string);
	string[pos] = '\0';
	system("pause");
	return 0;
}
