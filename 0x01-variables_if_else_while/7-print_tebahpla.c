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
	int i = 122, line = 10;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar(line);
	return (0);
}
