#include "main.h"

/**
* print_line - to print straight line
* _putchar - to print character
* @n: parameter for function
*
* Return: return is void
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
