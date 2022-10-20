#include "main.h"

/**
* print_numbers - to print only numbers
* _putchar - used in place of printf
*
* Return: return voids
*/

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
