#include "main.h"

/**
 * cap_string - appends to a string
 *  @p:string
 *  Return:char pointer
 */

char *cap_string(char *p)
{
	int i;
	char t;

	i = 0;
	t = '\0';
	while (p[i])
	{
		if (i > 0)
		{
			t = p[i - 1];
		}
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			if (t == '\n' || t == ' ' || t == ',' || t == '!')
			{
				p[i] = p[i] - 32;
			}
			else if (t == ';' || t == '\t' || t == '{' || t == '}')
			{
				p[i] = p[i] - 32;
			}
			else if (t == ')' || t == '(' || t == '.' || i == 0)
			{
				p[i] = p[i] - 32;
			}
		}
		i++;
	}
	return (&p[0]);
}
