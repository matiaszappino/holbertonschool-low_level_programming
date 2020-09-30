/**
 * _pow - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _pow(int n)
{
int xres = 1;
int p;

for (p = 0; p < n; p++)
{
xres *= 10;
}
return (xres);
}
