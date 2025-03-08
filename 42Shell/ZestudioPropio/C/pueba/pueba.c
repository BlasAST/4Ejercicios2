#include <unistd.h>


void ft_putchar(char *n)
{
	while (*n)
	{
		write(1, n, 1);
		n++;
	}
}

int main(int args, char **argv)
{
	while (args > 1)
	{
		ft_putchar(argv[args - 1]);
		args--;
	}
}
