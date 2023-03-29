#include "main.h"

/**
 * _strncat - Concatenates two strings with some conditions
 * @dest: first string
 * @src: second string
 * @n: integer n
 *
 * Return: Concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int slen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		slen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > slen)
		n = slen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
