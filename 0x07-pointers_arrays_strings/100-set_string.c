#include "main.h"
#include <stdio.h>

/**
 * set_string - sets value of a pointer to a char
 * @s: pointer to pointer of char s
 * @to: pointer to char to
 * Return: always 0 (Success)
 */

void set_string(char **s, char *to)
{
	*s = to;
}
