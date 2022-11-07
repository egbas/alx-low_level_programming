#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* main - main function
* @argc: count the number of CL args
* @argv: an array of pointers character
*
* Return: return and int
*/

int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);

	}

	return (0);
}
