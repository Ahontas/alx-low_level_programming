#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 * REturn: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index >= (sizeof(unsigned long int) * 8))

		return (-1);

	num = ~(num << index);

	*n = *n & num;

	return (1);
}
