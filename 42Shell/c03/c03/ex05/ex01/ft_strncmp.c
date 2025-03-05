/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 12:44:22 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/04 12:50:41 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
/*
void ft_putchar(char n)
{
	write (1, &n, 1);
}
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || (s2[i] == '\0')
			|| (s1[i] == '\0'))
		{
			while (s2[i] != '\0' && s1[i] != '\0')
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
/*
int	main(void)
{
	char	a[] = "Hoaaaaa";
	char	b[]= "Ho";
	if(ft_strncmp(a,b, 3) >= 0)
		ft_putchar(ft_strncmp(a,b, 3) + '0');
	else
	{
		ft_putchar('-');
		ft_putchar('1');
	}
}
*/
