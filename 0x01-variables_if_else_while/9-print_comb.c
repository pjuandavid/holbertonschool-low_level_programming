#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * This program prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
for (num = '0'; num <= '9'; num++)
{
putchar(num);
if (num == '9')
{
continue;
}
else
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
