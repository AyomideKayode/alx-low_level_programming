#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that gets a length of string
 *
 * @str: the string to get the length
 *
 * Return: length of @str
 */

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

/**
 * _strcopy - a function that returns @dest with a copy of a string from @src
 *
 * @src: string to copy
 * @dest: copy string to here
 *
 * Return: @dest
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 * Return: struct pointer dog
 * NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *busky_dog;

	/* if name and owner are empty and age is less than zero return null*/
	if (!name || age < 0 || !owner)
		return (NULL);

	busky_dog = (dog_t *) malloc(sizeof(dog_t));
	if (busky_dog == NULL)
		return (NULL);

	busky_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*busky_dog).name == NULL)
	{
		free(busky_dog);
		return (NULL);
	}

	busky_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*busky_dog).owner == NULL)
	{
		free(busky_dog->name);
		free(busky_dog);
		return (NULL);
	}

	busky_dog->name = _strcopy(busky_dog->name, name);
	busky_dog->age = age;
	busky_dog->owner = _strcopy(busky_dog->owner, owner);

	return (busky_dog);
}
