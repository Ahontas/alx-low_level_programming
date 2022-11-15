#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - function
 *  @name: name of dog
 *  @age: age of new dog
 *  @owner: owner of new dog
 *  Description: function to create a new dog. Store copy of name & owner
 *  Retur: ptr, null if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *newname, *newowner;
	int sname, sowner;

	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	_strlen(name);
	sname = _strlen(name);
	newname = malloc((sname + 1) * sizeof(char));
	if (newname == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(newname, name);


	_strlen(owner);
	sowner = _strlen(owner);
	newowner = malloc((sowner + 1) * sizeof(char));
	if (newowner == NULL)
	{
		free(newname);
		free(dog);
		return(NULL);
	}
	_strcpy(newowner, owner);

	dog->name = newname;
	dog->age = age;
	dog->owner = newowner;

	return (dog);
}

/**
 * _strlen - function
 * @dest: copy to
 * @src: copy from
 * Description: copies strng pnted by src to dest with null
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
