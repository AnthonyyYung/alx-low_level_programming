#include "main.h"

/**
 * _memset - Entry point
 * @s: memory pointed to
 * @n: bytes of memory to be filled
 * @b: constant bytes
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
