/**
 * print_name - function tu print a name
 * @name: the name
 * @f: pointer to char
 */
void print_name(char *name, void (*f)(char *))
{

	f(name);
}
