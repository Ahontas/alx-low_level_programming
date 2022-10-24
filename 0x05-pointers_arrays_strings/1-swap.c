#include "main.h"
/**
 * swap_int - swap two integers
 * @a: interger to be swapped
 * @b: integer to be swapped
 * Return 0
 */

void swap_int(int *a, int *b);
{
	int *temp = a;
	a = b;
	b = temp;
}
