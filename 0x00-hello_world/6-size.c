#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of char: %ld byte\n", sizeof(char));
printf("Size of an int: %ld bytes\n", sizeof(int));
printf("Size of a long int: %ld bytes\n", sizeof(long int));
printf("Size of a long long int: %ld bytes\n", sizeof(long long int));
printf("Size of float: %ld bytes\n", sizeof(float));
printf("Size of double: %ld bytes", sizeof(double));
return (0);
}
