#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: C programm prints comb. of single-digit numbers using putchar
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i = 48, comma = 44, line = 10, space = 32;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
		if (i == 57)
			continue;
		else
		{
			putchar(comma);
			putchar(space);
		}
	}
	putchar(line);
	return (0);

}
