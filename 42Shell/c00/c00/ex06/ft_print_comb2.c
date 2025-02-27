/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:41:03 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/02/26 13:28:59 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char n)
{
	write (1, &n, 1);
}

void	print_number(int n)
{
	ft_print_char(n / 10 + '0');
	ft_print_char(n % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x <= 98)
	{
		while (y <= 99)
		{
			print_number(x);
			ft_print_char(' ');
			print_number(y);
			if (x != 98 || y != 99)
			{
				ft_print_char(',');
			}
			y++;
		}
		y = 0;
		x++;
	}
}
