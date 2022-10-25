#include "main.h"

/**
 * rev_string - reverse a string
 * @s:String to reverse
 * Return:0
 */

void rev_string(char *s)
{
	int i, j, k;

	char x;

	j = 0;
	i = 0;
	while (s[i])
	{
		i++;
	}
	i--;
	k = i / 2;
	while (i > k)
	{
		x = s[i];
		s[i] = s[j];
		s[j] = x;
		j++;
		i--;
	}
}

