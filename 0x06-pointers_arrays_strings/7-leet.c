
#include "main.h"

/**
 * leet - encodes a string
 * @p:string
 * Return:char pointer
 */

char *leet(char *p)
{
	int i, j;
	char encodeA[] = "aAeEoOtTlL";
	char encodeB[] = "4433007711";

	i = 0;
	while (p[i])
	{
		j = 0;
		while (p[i] != encodeA[j] && j < 10)
		{
			j++;
		}
		if (p[i] == encodeA[j])
		{
			p[i] = encodeB[j];
		}
		i++;
	}
	return (&p[0]);
}
