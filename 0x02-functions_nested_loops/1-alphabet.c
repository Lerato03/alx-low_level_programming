<<<<<<< HEAD
[master 00fdad1] 1-alphabet.c
 2 files changed, 21 insertions(+), 13 deletions(-)
 create mode 100644 0x02-functions_nested_loops/1-alphabet.c
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
>>>>>>> 86f2309017da9eaba20d0b7711e77788338605f2
