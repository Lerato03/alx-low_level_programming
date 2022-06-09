<<<<<<< HEAD
[master 5590793] 1-alphabet.c
=======
#include "main.h"

/**
 * print_alphabet -prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
	ch++;
	}

	_putchar('\n');
}
>>>>>>> 6ae0a05c4fdc5154337079c03a0f16e43dd8ac2a
