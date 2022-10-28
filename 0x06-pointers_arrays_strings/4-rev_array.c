#include "main.h"

/**
 *  reverse_array - appeends to a string
 *   @a:destination
 *   @n:source
 *   Return:0
 */

void reverse_array(int *a, int n)
{
	int i, temp, k, j;

	i = 0;
	j = n - 1;
	k = n / 2;
	while (i < k)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
