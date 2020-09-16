#include<stdio.h>
#include<unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n2>", 62);
return (1);
}
