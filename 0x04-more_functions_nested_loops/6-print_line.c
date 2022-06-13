#include "main.h"

/**
 * print_line - print a line of n length
 * @n: length of line
 * Return: nothing
 */

void print_line(int n)
{
	int c = 0;

	while (c < n)
	{
		if (n > 0)
			_putchar('_');
		c++;
	}
	_putchar('\n');
}
