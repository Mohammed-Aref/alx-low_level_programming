#include "main.h"

/**
 *print_line - print line with n spaces long
 *
 * @n: integer input
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar ('_');
		_putchar ('\n');
	}
	else
	{
		_putchar ('\n');
	}
}
