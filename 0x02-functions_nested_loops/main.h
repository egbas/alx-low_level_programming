#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* print_alphabet - write alphabets to stdout
*
* return: on success 0
*
*/

int _isalpha(int c)
{
	int a, b;

	a = 65;
	b = 116;

	if(c < a || c > b)
	{
		return (0);
	} else
	{
		return (1);
	}

}


int _islower(int c)
{
	char a;

	for(a = 'a'; a <= 'z'; a++)
	{
		if(c < 'a' || c > 'z')
		{
			return (0);
		} else 
		{
			return (1);
		}
	}
}

void print_alphabet_x10(void)
{
	int i;
	char j;

	i = 0;

	while(i < 10)
	{
		j = 0;
		for(j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		i++;

		_putchar('\n');

	}
}

void print_alphabet(void)
{
	char i;

	for(i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');

}
