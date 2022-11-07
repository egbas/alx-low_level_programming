#include <stdio.h>

/**
* main - main function
* @argc: count the number of CL args
* @argv: an array of pointers character
*
* Return: return and int
*/

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
