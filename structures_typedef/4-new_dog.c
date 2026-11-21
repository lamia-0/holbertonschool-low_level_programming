#include "dog.h"
#include <stdlib.h>

/**
 * _copy_string - Creates a copy of a string
 * @src: String to copy
 *
 * Return: Pointer to new string, or NULL on failure
 */
char *_copy_string(char *src)
{
	char *copy;
	int len = 0;
	int i;

	if (src == NULL)
		return (NULL);

	while (src[len] != '\0')
		len++;

	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = src[i];

	return (copy);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 *
 * Return: Pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = _copy_string(name);
	if (name != NULL && dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = _copy_string(owner);
	if (owner != NULL && dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}
