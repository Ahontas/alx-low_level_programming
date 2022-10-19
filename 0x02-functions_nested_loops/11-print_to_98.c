#include "main.h"
#include<stdio.h>
/**
 * @n: print_to_98 - print to 98
 * start at n point
 * Return:0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n < 98)
			{
				printf("%d, ", n);
			} else
			{
				printf("%d\n", n);
			}
		}
	} else if  (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			if (n > 98)
			{
				printf("%d, ", n);
			} else
			{
				printf("%d\n", n);
			}
		}
	}
}
