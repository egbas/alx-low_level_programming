#include "main.h"

/**
* _isdigit - to check for digits
* @c: c is an ascii character
*
* Return: return 1 if digit
*/

int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 58; i++)
	{
		if (c >= 48 && c < 58)
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
