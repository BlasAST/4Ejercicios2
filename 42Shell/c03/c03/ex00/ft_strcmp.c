/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:15:47 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/02/28 13:16:28 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}
*/
int	ft_strcmp(char *s1, char *s2)
{
	int dif;

	dif = 0;
	while(*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	dif = *s1 - *s2;
	return dif;
}
/*
int	main(void)
{
	char	a[] = "Holaa";
	char	b[]= "Holaaaaaa";
	int res =ft_strcmp(a,b);
	if (res >= 0 )
	{
		ft_putchar(res / 10 + '0');
		ft_putchar(res % 10 + '0');
	}
	else
	{
		ft_putchar('-');
		ft_putchar(res / 10 + '0');
		ft_putchar(res % 10 + '0');
	}
}
*/
