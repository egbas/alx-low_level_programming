#include "main.h"

/**
* print_most_numbers - to print only numbers
* _putchar - used in place of printf
*
* Return: return voids
*/

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if ((i != 50) && (i != 52))
		{
			_putchar(i);
		}
	}
	_putchar('\n');

}
