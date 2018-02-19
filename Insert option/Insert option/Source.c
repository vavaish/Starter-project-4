#include "stdio.h"
#include <stdlib.h>
#include <string.h>
#include"conio.h"
#define BS 8
#define space 32
#define L_Key 75
#define R_Key 77

int main()
{
	char string[256]="";
	int counter=0;
	int get=0;
	int ch = 0;
	int len=0;

	printf("Enter Numbers:\n");
	while (1) 
	{
		len = strlen(string);
		get = _getch();
		if (counter-ch < 10)
		{
			if ((get >= '0'&&get <= '9') &&(ch==0))
			{
				string[counter] = get;
				counter++;
				_putch(get);
			}
			else
			{
				if (get >= '0'&&get <= '9')
				{
					string[counter - ch] = get;
					_putch(string[counter - ch]);
					counter++;
				}
			}
			if ((get == BS) && (counter > 0))
			{
				_putch('\b');
				_putch(' ');
		     	_putch('\b');
				string[counter] =' ';
				counter--;
			}
			if (get == '\r') 
			{
				break;
			}
		}
		else
		{
			break;
		}
		if (counter != 0)
		{
			if (get == L_Key)
			{
				_putch('\b');
				ch++;
			}
			if (get == R_Key)
			{
				_putch(string[counter - ch]);
				ch--;
			}
		}
		string[counter] = '\0';
	}		
	printf("\nNumbers:%s Array lenght:%d\n", string, len);
	
	getchar();
	return 0;
}