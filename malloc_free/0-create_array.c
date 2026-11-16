#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: Number of elements
 * @c: Character used to initialize the array
 *
 * Return: Pointer to the array, or NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr  = malloc(size * sizeof(char));

	if (arr == NULL)
{
	return (NULL);
}

for (i = 0; i < size; i++)
{
	arr[i] = c;
}
	return (arr);
	}

