#include "main.h"

/**
* _strncpy - to copy n strings
* @dest: destination
* @src: source
* @n: the number to copy
* Return: Return char array
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
