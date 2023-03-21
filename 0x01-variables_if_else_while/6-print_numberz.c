#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: C programm that prints from 0 to 9 using putchar
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i = 48, line = 10;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar(line);
	return (0);
}
