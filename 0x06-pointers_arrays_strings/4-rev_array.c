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
	int temp, counter;

	n = n - 1;
	counter = 0;

	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
