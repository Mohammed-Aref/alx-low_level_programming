#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C programm that prints alphabets without e and q
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i = 97, line = 10;

	for (i = 97 ; i <= 122 ; i++)
	{
		if (i == 101 || i == 113)
			continue;
		else
		{
			putchar(i);
		}
	}
	putchar(line);
	return (0);
}
