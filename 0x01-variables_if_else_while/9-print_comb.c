<<<<<<< HEAD
[master 71e8192] print comb c
=======
#include <stdio.h>

/**
 * main -prints all possible combinations of single-digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
>>>>>>> 3fc41ba1259a3cff923e58db7b2c9b61bc5feb18
