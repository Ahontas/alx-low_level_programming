#include "main.h"
/**
 * print_last_digit - print last digit
 * Parameter:l
 *
 * Return:the last digit of l
 */

int print_last_digit(int l)
{
	if (l % 10 < 0)
	{
		_putchar(((l % 10) * -(1)) + 52);
		return ((l % 10) * -(1));
	}
	_putchar((l % 10) + 52);
	return (l % 10);
}
