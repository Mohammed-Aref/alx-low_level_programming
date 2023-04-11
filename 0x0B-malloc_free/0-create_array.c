#include "main.h"

/**
 * *create_array- function that creates an array of chars,
 * and initializes it with a specific char
 * @c: initialized  character
 * @size: array size
 * Return: pointer to array or NULL
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (n == NULL || size == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
