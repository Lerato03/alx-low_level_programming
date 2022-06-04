#include <stdio.h>

/**
 * main - prints the alphabet in lowcase
 * followed by a line, expect q and e
 * Return: always 0 (success)
 */
int main(void)
{
	char ch= 'a';

	while (ch <= 'z')
	{
		if(ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
