#include "main.h"
#include <string.h>

/**
 * _strncat - a function that concantenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: n
 * Return: Always 0 (Success)
 */
char *strncat(char *dest, char *src, int n)
{
	int i, co;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (co = 0; co < n; co++)
	{
		dest[i + co] = src[co];
		if (src[co] == '\0')
			co = n;
	}
	return (dest);
}
