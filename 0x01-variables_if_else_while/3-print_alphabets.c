#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C programm that prints alphabets in small and capital letters
 *
 * Return: Always 0 (success)
*/

int main(void)
{

	int small = 97, capital = 65, line = 10;

	while (small >= 97 && small <= 122)
	{
		putchar(small);
		small++;
	}
	while (capital >= 65 && capital <= 90)
	{
		putchar(capital);
		capital++;
	}
	putchar(line);
	return (0);
}
