#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - length of string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)

{
	int p;

	p = 0;

	while (s[p] != '\0')
	{
		p++;
	}

	return (p);
}

/**
 * *_strcpy - copies the string
 * including the terminating null byte (\0)
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)

{
	int len, p;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (p = 0; p < len; p++)
	{
		dest[p] = src[p];
	}
	dest[p] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: dog age
 * @owner: dog owner
 *
 * Return: success
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
