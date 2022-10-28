#include "main.h"

/**
 * string_toupper - appeends to a string
 * @p:string
 * Return:char pointer
 */

char *string_toupper(char *p)
{
	int i;

	i = 0;
	while (p[i])
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = p[i] - 32;
		}
		i++;
	}
	return (&p[0]);
}
