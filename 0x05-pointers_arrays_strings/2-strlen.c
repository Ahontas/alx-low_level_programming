#include "main.h"
/**
 * strlen - check for lenth of word
 * @w: variable to check
 * Return length of @w
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
