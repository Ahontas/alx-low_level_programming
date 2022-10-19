#include "main.h"
/**
 * print_last_digit - print last digit
 * @l: Parameter of focus
 *
 * Return:the last digit of l
 */

int print_last_digit(int l)
{
	if (l % 10 < 0)
	{
		_putchar(((l % 10) * -(1)) + 48);
		return ((l % 10) * -(1));
	}
	_putchar((l % 10) + 48);
	return (l % 10);
}
