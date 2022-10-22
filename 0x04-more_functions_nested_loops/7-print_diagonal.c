#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @n: length of diagonal line
 * return:0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < n; i++)
		{
			j = i;
			while (j >= 0)
			{
				if (j == 0)
				{
					_putchar('\\');
				} else
				{
					_putchar(' ');
				}
				j--;
			}
			_putchar('\n');
		}
	}
}
