<<<<<<< HEAD
[master 7ec7100] size c
 2 files changed, 18 insertions(+)
 create mode 100644 0x00-hello_world/6-size.c
 create mode 100644 0x00-hello_world/README.md
=======
#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited proparly, non-zero otherwise
 */
int main(void)
{
	printf("size of a char: %d byte(s)\n", sizeof(char));
	printf("size of an int: %d byte(s)\n", sizeof(int));
	printf("size of a long int: %d byte(s)\n", sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
>>>>>>> b2fa48b724fc1d9dbf2a38cb8ba5dbc190b1e9d6
