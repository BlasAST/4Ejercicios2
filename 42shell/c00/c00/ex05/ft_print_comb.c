/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:42:08 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/12 22:24:31 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	numbers [3];

	numbers[0] = '0';
	while (numbers[0] <= '7')
	{
		numbers[1] = numbers[0] + 1;
		while (numbers[1] <= '8')
		{
			numbers[2] = numbers[1] + 1;
			while (numbers[2] <= '9')
			{
				write(1, numbers, 3);
				if (!(numbers[0] == '7'
						&& numbers[1] == '8'
						&& numbers[2] == '9'))
					write (1, ",", 1);
				numbers[2]++;
			}
			numbers[1]++;
		}
		numbers[0]++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}
*/
