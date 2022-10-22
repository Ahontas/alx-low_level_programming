#include "main.h"
/**
 * print_triangle - print triangle
 * @size:size of triangle
 * Return:0
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			j = size - 1;

			while (j >= 0)
			{
				if (j <= i)
				{
					_putchar('#');
				} else
				{
					_putchar(' ');
				}
				j--;
			}
			if (i < (size - 1))
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
