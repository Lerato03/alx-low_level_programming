<<<<<<< HEAD
[master f3ff1ba] 5-sign.c
 2 files changed, 28 insertions(+), 11 deletions(-)
 create mode 100644 0x02-functions_nested_loops/5-sign.c
=======
#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Return: 1 and prints + if n is greater than zero
 * o and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
>>>>>>> 004a5b7be8bf82f8ccbeb81fc0ef44091dd4d50e
