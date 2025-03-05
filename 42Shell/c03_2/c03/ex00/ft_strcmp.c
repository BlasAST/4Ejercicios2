/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 12:15:47 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/05 15:22:53 by bsiguenc         ###   ########.fr       */
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
	int	i;

	i = 0;
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	char	a[] = "Holaaa";
	char	b[]= "Holaaa";
	int h = ft_strcmp(a,b);
	
	ft_putchar(h / 10 + '0');
	ft_putchar(h % 10 + '0');
	
}
*/
