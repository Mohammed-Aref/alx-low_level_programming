#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: C programm prints last digit of a number with its sign
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("Last digit of %d is %d%10 and is greater than 5\n", n, n);
	else if (n == 0)
		printf("Last digit of %d is %d%10 and is 0\n", n, n);
	else
		printf("Last digit of %d is %d%10 and is less than 6 and not 0\n", n, n);
	return (0);
}
