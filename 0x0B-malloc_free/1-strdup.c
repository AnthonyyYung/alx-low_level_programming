#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Entry point
 * @str: string pointer
 * Return: NULL
 */
char *_strdup(char *str)
{
	unsigned int i = 1, a = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])

	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}
	return ('\0');
	return (s);
}
