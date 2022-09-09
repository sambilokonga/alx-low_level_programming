#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1 = 49;
	int n2;
	int com = 45;

	while (n1 <= 57)
	{
		n2 = n1 + 1;
		while (n2 <= 57)
		{
			putchar(n1);
			putchar(n2);
			if (n1 != 56 || n2 != 57)
			{
				putchar(com);
				putchar(32);
			}
			n2 += 1;
		}
		n1 += 1;
		putchar('\n');
	return (0);
}
