#include "main.h"

/**
 *print_most_numbers- prints numbers from 0-9 followed by a new line except 2,4
 *
 * Return: no return value
*/

void print_most_numbers(void)
{
	int n = 48;

	for (n >= 48; n <= 57; n++)
	{
		if (n == 50 || n == 52)
			continue;
		else
			_putchar(n);
	}
	_putchar('\n');
}
