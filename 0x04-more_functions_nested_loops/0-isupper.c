#include "main.h"
/**
 * _isupper - uppercase letters
 * Description -  function that checks for uppercase character.
 * Return: 0 or 1
 * @c: char to check
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

