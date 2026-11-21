#include "main.h"
#include <stdlib.h>
#include <stdint.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Pointer to the array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	size_t size;
	size_t i;

	if (min > max)
		return (NULL);

	size = (size_t)((int64_t)max - (int64_t)min) + 1;

	if (size > SIZE_MAX / sizeof(int))
		return (NULL);

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = (int)((int64_t)min + (int64_t)i);

	return (arr);
}
