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
	int i = 48, j = 44, nine = 57, space = 32;

	while (i < 57)
	{
		putchar(i);
		putchar(j);
		putchar(space);
		i++;
	}
	putchar(nine);
	return (0);

}
