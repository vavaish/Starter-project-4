#include "stdio.h"
#include <stdlib.h>
#include <string.h>
#include"conio.h"
#define BS 8
#define space 32
#define L_Key 75
#define R_Key 77
char length(int *p)
{
	int s = 0;
	while (*p != '\0')
	{
		s++;
		p++;
	}
	return s;
}
int main()
{
	
	char string[256]="";
	int counter=0;
	int get=0;
	
	int ch = 0;
	
	int len=0;

	printf("Enter Numbers:");
	while (1) 
	{
	
		len = strlen(string);
		get = _getch();
		
		if (counter < 10)
		{
			if (get >= '0'&&get <= '9') 
			{
				string[counter] = get;
				counter++;
				
				_putch(get);
				

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
		
			if (get == L_Key) 
			{
				
				_putch('\b');
				ch++;
			
			}
			
			
		if (get == space)
		{
			string[counter] = ' ';
			counter++;
			_putch(get);
		}
		
		string[counter] = '\0';
	}		
	
	
	printf("\nNumbers:%c Array lenght:%d\n", string[counter-ch], len);
	
	_getch();
	return 0;
}