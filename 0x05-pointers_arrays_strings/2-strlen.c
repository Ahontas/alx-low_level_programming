#include "main.h"
/**
 * _strlen - check for lenth of word
 * @s: variable to check
 * Return: length of @s
 */
int _strlen(char *s)
{
	int w = 0;

	while (s[w] != '\0')
	{
		w++;
	}
	return (w);
}
