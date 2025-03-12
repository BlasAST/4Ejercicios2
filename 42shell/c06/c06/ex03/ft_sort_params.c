/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:48:06 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/10 14:08:26 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_args(int args, char **argv)
{
	while (args - 1 > 0)
	{
		while (*argv[args - 1] != '\0')
			write(1, argv[args - 1]++, 1);
		write(1, "\n", 1);
		args--;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 > *s2)
		return (1);
	else
		return (-1);
}

int	main(int args, char **argv)
{
	int		i;
	int		j;
	char	*temporal;

	i = 1;
	while (i < args - 1)
	{
		j = 1;
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
	print_args(args, argv);
}
