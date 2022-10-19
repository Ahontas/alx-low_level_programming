#include "main.h"
/**
 * times_table - print times table
 *
 * Return:0
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (result < 10 && j > 0)
			{
				_putchar(' ');
			}
			if (result >= 10)
			{
				_putchar(result / 10 + 48);
				_putchar(result % 10 + 48);
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			} else
			{
				_putchar(result + 48);
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
