#include "main.h"


/**
* reverse_array - to reverse array
* @a: array
* @n: number in array
*
* Return: return void
*/


void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	j = 0;

	for (i = 0; i > n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
