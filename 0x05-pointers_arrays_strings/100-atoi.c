#include "holberton.h"
/**
 * _atoi - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _atoi(char *s)
{
int a;
int res = 0;
int signo = 1;
int n;

for (a = 0; s[a] != '\0'; a++)
{
if (s[a] == '-')
{
signo *= -1;
}
if (s[a] >= '0' && s[a] <= '9')
{
break;
}
}
if (s[a] == '\0')
{
return (0);
}
else
{

int ini = a;
int fin;

for (; s[a] >= '0' && s[a] <= '9'; a++)
{
fin = a;
}
for (n = 0; fin >= ini; fin--, n++)
{
res += ((s[fin] - '0') * _pow(n)) * signo;
}
return (res);
}
}
