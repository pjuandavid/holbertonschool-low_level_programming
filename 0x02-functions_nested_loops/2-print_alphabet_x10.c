#include "holberton.h"
/**
 * print_alphabet_x10 - L
 * Description: use _putchar.c
 * Return: 0 L
 */
void print_alphabet_x10(void)
{
char  b;
char  c;
for (b = 0; b <= 9; b++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
