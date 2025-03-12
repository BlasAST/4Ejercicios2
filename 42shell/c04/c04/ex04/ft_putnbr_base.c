/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:52:20 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/12 18:22:35 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

int	ft_find(char *base, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (base[j] == base[i])
			return (0);
		j++;
	}
	return (1);
}

int	ft_valid_base_len(char *base)
{
	int	i;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (ft_find(base, i) == 0)
			return (0);
		i++;
	}
	return (i);
}

void	conver(int nbr, char *base, int base_len)
{
	if (nbr >= base_len)
		conver(nbr / base_len, base, base_len);
	if (base_len != 8)
		ft_putchar(base[nbr % base_len]);
	else
		ft_putchar(nbr % base_len + '0');
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size_base;

	if (ft_valid_base_len(base) == 0)
		return ;
	else
		size_base = ft_valid_base_len(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	conver(nbr, base, size_base);
}
/*
int main(void)
{

	ft_putnbr_base(1234, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(1234, "01");
	ft_putchar('\n');
	ft_putnbr_base(1234, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(1234, "poniguay");
	ft_putchar('\n');
	return (0);
}
*/
