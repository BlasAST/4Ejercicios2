#include <unistd.h>

int ft_strcmp (char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if ( *s1 > *s2)
		return (1);
	else
		return (-1);
}

int	main(int args, char **argv)
{
	int	i;
	int	j;
	char *temporal;

	i = 1;
	while (i < args - 1)
	{
		j = 0;
		while (j < args - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) == -1)
			{
				temporal = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temporal;
			}
			j++;
		}
		i++;
	}
	while (args > 0)
	{
		while (*argv[args - 1] != '\0')
			write(1, argv[args - 1]++, 1);
		write(1,"\n",1);
		args--;
	}
}
