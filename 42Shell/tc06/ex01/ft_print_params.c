#include <unistd.h>

int	main(int args, char **argv)
{
	int	i;

	i = 1;
	while (i != args)
	{
		while (*argv[i] != '\0')
			write(1, argv[i]++,1);
		write(1, "\n",1);
		i++;
	}
}
