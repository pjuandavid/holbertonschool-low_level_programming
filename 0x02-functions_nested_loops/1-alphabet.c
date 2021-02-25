#include "holberton.h"
/**
 * print_alphabet - prints the letters from a to z in lowercase
 * Description: use _putchar.c
 * Return: 0 H
 */
void print_alphabet(void);
{
int letra = 'a';
while (letra <= 'z')
{
_putchar(letra);
letra++;
}
_putchar('\n');
}
