#include <stdio.h>
#include "main.h"

/**
* main - main function
* @argc: count the number of CL args
* @argv: an array of pointers character
*
* Return: return and int
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	argc -= 1;

	printf("%d\n", argc);

	return (0);

}
