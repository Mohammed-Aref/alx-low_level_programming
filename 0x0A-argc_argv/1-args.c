#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc : integer
 * @argv : array pointer
 * Return: (0)
*/
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%d\n", argc - 1);
	return (0);
}
