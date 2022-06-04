#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the last digit of a randomly generated number
 * Return: always 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes there*/
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		 printf("and is 0\n");
	else if (n % 10 < 6 && n % 10 !=0)
		printf("and is less than 6 an not 0\n");
	return (0);
			}
