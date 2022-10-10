#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Returns the length of the string
 * @str: The input string.
 * Return: The length.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Function to copy string.
 * @dest: destination.
 * @src: source
 * Return: The pointer to destination.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - FUnction to creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Return: The new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *output_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	output_dog = malloc(sizeof(dog_t));
	if (output_dog == NULL)
		return (NULL);

	output_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (output_dog->name == NULL)
	{
		free(output_dog);
		return (NULL);
	}

	output_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (output_dog->owner == NULL)
	{
		free(output_dog->name);
		free(output_dog);
		return (NULL);
	}

	output_dog->name = _strcopy(output_dog->name, name);
	output_dog->age = age;
	output_dog->owner = _strcopy(output_dog->owner, owner);

	return (output_dog);
}
