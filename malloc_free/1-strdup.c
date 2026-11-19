#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string using allocated memory
 * @str: String to duplicate
 *
 * Return: Pointer to duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int len = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}

	copy[len] = '\0';

	return (copy);
}
