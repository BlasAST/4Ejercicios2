#include <unistd.h>

int	main(int args, char **argv)
{
	while (*argv[0] != '\0')
		write(1, argv[0]++,1);
}
