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

void conver(int nbr, char *base, int div)
{
	if (nbr >= div)
		conver(nbr / div, base,div);
	ft_putchar(base[nbr % div]);

}
void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	if (base[i] == '\0')
		return ;
	while (base[i] != '\0')
	{
		i++;
		if (base[i - 1] == base[i] || base[i] == '+' || base[i] == '-')
			return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (ft_strcmp(base,"0123456789") == 0)
		conver(nbr,base,10);
	if (ft_strcmp(base,"01") == 0)
		conver(nbr,base,2);
	if (ft_strcmp(base,"0123456789ABCDEF") == 0)
		conver(nbr,base,16);
	if (ft_strcmp(base,"poniguay") == 0)
		conver(nbr,"01234567",8);
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

