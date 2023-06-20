#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * _strlen -a function that returns the length of a string
 * @s:the string to evaluate
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	return (j);
}

/**
 *_strcpy -a function that copies the string pointed to by src
 *also  including the terminating null byte (\0)
 * a buffer pointed to by dest
 * @dest:the pointer to the buffer in which we copy the string
 * @src:the  string to be copied
 *
 * Return:a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, j;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (j = 0; j < len; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}

/**
 * new_dog -a function that creates a new dog
 * @name:the name of the dog
 * @age:the age of the dog
 * @owner:the owner of the dog
 *
 * Return:a pointer to the new dog Success and NULL otherwise
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

	(*dog).name = malloc(sizeof(char) * (len1 + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	(*dog).owner = malloc(sizeof(char) * (len2 + 1));
	if ((*dog).owner == NULL)
	{
		free(dog);
		free((*dog).name);
		return (NULL);
	}
	_strcpy((*dog).name, name);
	_strcpy((*dog).owner, owner);
	(*dog).age = age;

	return (dog);
}

