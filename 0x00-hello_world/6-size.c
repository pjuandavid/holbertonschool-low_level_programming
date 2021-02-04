#include <stdio.h>

/**
 * main - prints standard variable size to stdout
 * description: uses sizeof to determine variable size
 * Return: void
 */

int main(void)
{
printf("Size of a char: %i byte(s)\n", sizeof(char));
printf("Size of an int: %i byte(s)\n", sizeof(int));
printf("Size of a long int: %i byte(s)\n", sizeof(long));
printf("Size of a long long int: %i byte(s)\n", sizeof(long long));
printf("Size of a float: %i byte(s)\n", sizeof(float));

return (0);
}
