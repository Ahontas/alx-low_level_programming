#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checking fir negative or positive
 *
 * Return:0 (successful)
 */
int main(void)
{
	int n, check;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	check = n % 10;

	if (check > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, check);
	} else if (check == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, check);
	} else if (check < 6 && check != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, check);
	}
	return (0);
}
