#include "main.h"

/**
* swap_int - to swap values
*
* @a: parameter one
* @b: parameter two
*
* Return: to return value
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;
	*b = c;
}
