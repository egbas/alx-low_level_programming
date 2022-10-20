#include "main.h"

/**
* _isupper - to confirm uppercase
* @c: c is an ascii character
*
* Return: returns 1 if upper
*/

int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (c >= 65 && c <= 90)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
