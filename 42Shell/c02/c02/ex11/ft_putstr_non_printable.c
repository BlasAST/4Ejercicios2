/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:35:48 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/02/28 11:07:57 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_print_hex(char n)
{
	ft_putchar('\\');
	if (n / 16 >= 10)
		ft_putchar(n / 16 - 10 + 'a');
	else
		ft_putchar(n / 16 + '0');
	if (n % 16 >= 10)
		ft_putchar(n % 16 - 10 + 'a');
	else
		ft_putchar(n % 16 + '0');
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] != 127)
			ft_putchar(str[i]);
		else
			ft_print_hex(str[i]);
		i++;
	}
}
/*
int main(void)
{
	char a[] = "Hola uenas\ntar\tdes";
	ft_putstr_non_printable(a);
}
*/
