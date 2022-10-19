#include "main.h"
/**
 * _islower - check for lowercase
 * character to check:c
 *
 * Return:0 or 1
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
