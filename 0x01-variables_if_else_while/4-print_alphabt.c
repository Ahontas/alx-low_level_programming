#include<stdio.h>
/**
 * main- printing alphabet
 *
 * Return: 0 (succesful)
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'q' && n != 'e')
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
