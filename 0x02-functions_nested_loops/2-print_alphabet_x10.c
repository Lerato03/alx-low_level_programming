<<<<<<< HEAD
[master 89b90e0] 2-print_alphabet_x10.c
 1 file changed, 3 insertions(+), 25 deletions(-)
=======
#include "main.h"

/**
*print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
*followed by a new line
*/
void print_alphabet_x10(void)
{
char ch;
int i;

i = 0;

while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
>>>>>>> 6ae0a05c4fdc5154337079c03a0f16e43dd8ac2a
