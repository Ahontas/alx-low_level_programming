#include<stdio.h>
/**
 * main- printing alphabet
 *
 * Return: 0 (succesful)
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x == 57)
		{
			putchar('\n');
		} else
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
