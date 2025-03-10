#include <unistd.h>

int	main(int args, char **argv)
{
	while (args > 1)
	{
		while (*argv[args - 1] != '\0')
			write(1, argv[args - 1]++, 1);
		write(1, "\n", 1);
		args--;
	}
}
