#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
int w;
int y;
int z;
for (w = 0; w <= 9; w++)
{
for (y = 0; y <= 9; y++)
{
z = w * y;
if (y == 0)
{
_putchar (z + '0');
}
else if (z < 10)
{
_putchar (' ');
_putchar (z + '0');
}
else
{
_putchar(z / 10 + '0');
_putchar(z % 10 + '0');
}
if (y != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar ('\n');
}
}
