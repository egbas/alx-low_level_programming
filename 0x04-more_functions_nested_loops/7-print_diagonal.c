#include "main.h"

/**
* print_diagonal - to print straight line
* _putchar - to print character
* @n: parameter for function
*
* Return: return is void
*/

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				if (i == j)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
