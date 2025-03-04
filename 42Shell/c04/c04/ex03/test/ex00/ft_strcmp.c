/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:15:47 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/04 17:43:13 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
		{
			while (s1[i] != '\0' && s2[i] != '\0')
			{
				i++;
			}
			if (s1[i] == '\0')
				return (-1);
			else
				return (1);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	a[] = "Hola";
	char	b[]= "Holaaa";
	if(ft_strcmp(a,b) >= 0)
		ft_putchar(ft_strcmp(a,b) + '0');
	else
	{
		ft_putchar('-');
		ft_putchar('1');
	}
}
