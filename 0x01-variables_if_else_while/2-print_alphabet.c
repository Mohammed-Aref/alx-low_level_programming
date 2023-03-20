#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C programm that prints alphabets
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i = 97, line = 10;

	while (i >= 97 && i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar(line);
	return (0);
}
