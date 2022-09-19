#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i = 0;
	int n = 0;

	while (str[i] != '\0')
		i += 1;
	n = i / 2;
	if (i % 2 == 1)
		n += 1;
	while (str[n] != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
