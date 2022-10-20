#include "main.h"

/**
* print_triangle - function to print traingles
* _putchar - for printing output
* @size: parameter of function
*
* Return: return output
*/

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}

