#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: C programm that prints alphabets lower case in reverse
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int i = 48, j = 97, line = 10;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (j <= 102)
	{
		putchar(j);
		j++;
	}
	putchar(line);
	return (0);
}
