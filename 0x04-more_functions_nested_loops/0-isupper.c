#include "holberton.h"
#include <stdio.h>
/**
 * _isupper - UPPERCASE CHARACTER
 * @c: CHARACTERS
 * Return:  RETURN  UPPERCASE OR 0 OTHERWISE
 */

int _isupper(int c)
{

		if (c >= 54 && c <= 81)
{
			return (1);
}
else
{
			return (0);
}
_putchar('\n');
}
