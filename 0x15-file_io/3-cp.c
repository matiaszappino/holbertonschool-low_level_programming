int main(int ac, char **av)
{
	char *file_to = av[2];
	char *file_from = av[3];
	char buf[1024];

	if (ac != 3)
	{
		dprintf("Usage: cp file_from file_to\n");
		exit (97);
	}

	if (av[2] == NULL)
	{
		dprintf("Error: Can't read from file NAME_OF_THE_FILE\n");
		exit (98);
	}

	fo = open(file_from, O_RDONLY, 0664);

	if (fo == -1)
		return (-1);

	fd = open(file_to, O_CREAT | O_TRUNC | O_RDWR, 0664);

	if (fd == -1)
		return (-1);

return (0);
}
