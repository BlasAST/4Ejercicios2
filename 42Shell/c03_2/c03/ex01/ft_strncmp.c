/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 12:44:22 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/05 15:30:05 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void ft_putchar(char n)
{
	write (1, &n, 1);
}
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
int	main(void)
{
	char	a[] = "Hoaaaaa";
	char	b[]= "Hoa";
	int h = ft_strncmp(a,b,8);
	ft_putchar(h / 10 + '0');
	ft_putchar(h / 10 + '0');
}*/
