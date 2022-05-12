#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
void fillMem(char *src, int sLen, char *dest);

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: pointer to new dog created or NULL if failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int nlen, olen;
	/*nlen represents length of dog name, olen, length of owner name*/

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	nlen = _strlen(name);
	n_dog->name = malloc(sizeof(char) * nlen + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	fillMem(name, nlen, n_dog->name);
	olen = _strlen(owner);
	n_dog->owner = malloc(sizeof(char) * olen + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog);
		free(n_dog->name);
		return (NULL);
	}
	fillMem(owner, olen, n_dog->owner);
	n_dog->age = age;
	return (n_dog);
}

/**
 * _strlen - get string length
 * @str: string
 *
 * Return: length of string
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * fillMem - copy string to allocated memory
 * @src: string to be copied
 * @sLen: length of string src
 * @dest: allocated memory to copy string to
 */

void fillMem(char *src, int sLen, char *dest)
{
	int i;

	for (i = 0; i < sLen; i++)
		dest[i] = src[i];
	dest[i] = '\0';
}
