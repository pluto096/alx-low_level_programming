#include<stdlib.h>
#include "dog.h"

/**
 * _strlen - Function to count length of string
 * @s: String to be counted
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - Function to copy string
 * @dest: Destination of the copied string
 * @src: Source of copied string
 *
 * Return: Destination of copied string
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = _strlen(src);

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Function to create new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Null if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2;
	dog_t *doggo;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(dog_t) * (len1 + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo->owner = malloc(sizeof(dog_t) * (len2 + 1));
	if (doggo->owner == NULL)
	{
		free(doggo);
		free(doggo->name);
		return (NULL);
	}

	doggo->age = age;
	_strcpy(doggo->name, name);
	_strcpy(doggo->owner, owner);

	return (doggo);
}
