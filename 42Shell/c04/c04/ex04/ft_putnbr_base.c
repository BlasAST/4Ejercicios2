/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:52:20 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/05 19:36:17 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char n)
{
	write(1, &n, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);

}

void base_decimal(int nbr)
{
	if (nbr / 10 > 0)
	{
		base_decimal(nbr / 10);
	}
	ft_putchar(nbr % 10 + '0');
}

void base_binary(int nbr)
{
	if (nbr / 2 > 2)
	{
		base_binary(nbr / 2);
	}
	ft_putchar(nbr % 2 + '0');
}

void base_hexadecimal(int nbr)
{
	if (nbr / 10 > 0)
	{
		base_decimal(nbr / 10);
	}
}

void base_octal(int nbr)
{
	if (nbr / 10 > 0)
	{
		base_decimal(nbr / 10);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_strcmp(base,"0123456789") == 0)
		base_decimal(nbr);
	if (ft_strcmp(base,"01") == 0)
		base_binary(nbr);
	if (ft_strcmp(base,"0123456789ABCDEF") == 0)
		base_hexadecimal(nbr);
	if (ft_strcmp(base,"01234567") == 0)
		base_octal(nbr);
}

int main(void)
{
	ft_putnbr_base(1234, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(34, "01");
	ft_putchar('\n');
//	ft_putnbr_base(1234, "0123456789");
	ft_putchar('\n');
//	ft_putnbr_base(1234, "0123456789");
	ft_putchar('\n');
	return (0);
}
