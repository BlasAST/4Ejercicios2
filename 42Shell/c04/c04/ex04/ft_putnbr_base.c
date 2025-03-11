/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:52:20 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/11 20:04:48 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}
/*
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
*/
int	ft_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if(base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		/*
		j = 0;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				//return (0);
			j++;
		}
		*/
		i++;	
	}
	return (1);
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (*base != '\0')
	{
		base++;
		i++;
	}
	return (1);
}

void	conver(int nbr, char *base, int base_len)
{
	if (nbr >= base_len)
		conver(nbr / base_len, base, base_len);
	ft_putchar(base[nbr % base_len] + '0');
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size_base = ft_strlen(base);
	if (!ft_valid_base(base))
		return ;
	conver(nbr, base, ft_strlen(base));
}

int main(void)
{

	ft_putnbr_base(-1234, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(34, "01");
	ft_putchar('\n');
	ft_putnbr_base(1234, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(1234, "poniguay");
	ft_putchar('\n');
	return (0);
}

