#include<stdio.h>
/**
 * main- printing alphabet
 *
 * Return: 0 (succesful)
 */
int main(void)
{
	int n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
