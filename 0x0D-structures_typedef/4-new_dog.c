#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function will calculate length of string
 * @s: represents string
 * Return: function will return string length
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}

/**
 * _strcpy - function will copy one string to another
 * @dest: represents destination string
 * @src: represents source string
 * Return: function will return destination string
 */

char *_strcpy(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (src[a] != '\0')
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	return (dest);
}

/**
 * new_dog - function will create a new dog
 * @name: represents dog name
 * @age: represents dog aged
 * @owner: represents owne rname
 * Return: function will return pointer to new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *copy1;
	char *copy2;
	dog_t *doggie;

	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
	{
		free(doggie);
		return (NULL);
	}
	copy1 = malloc(_strlen(name) + 1);
	if (copy1 == NULL)
	{
		free(doggie);
		free(copy1);
		return (NULL);
	}
	copy2 = malloc(_strlen(owner) + 1);
	if (copy2 == NULL)
	{
		free(doggie);
		free(copy1);
		free(copy2);
		return (NULL);
	}
	_strcpy(copy1, name);
	_strcpy(copy2, owner);
	doggie->name = copy1;
	doggie->age = age;
	doggie->owner = copy2;
	return (doggie);
}
