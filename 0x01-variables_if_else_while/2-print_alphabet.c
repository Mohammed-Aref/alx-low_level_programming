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
	int i = 97;

	while (i >= 97 && i <= 122)
	{
		putchar(i);
		i++;
	}
	return (0);
}
