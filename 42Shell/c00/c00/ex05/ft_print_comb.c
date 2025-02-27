/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:42:08 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/02/26 13:25:45 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	numbers [3];

	numbers[0] = '0';
	numbers[1] = '1';
	numbers[2] = '2';
	while (numbers[0] <= '7')
	{
		while (numbers[1] <= '8')
		{
			while (numbers[2] <= '9')
			{
				if (numbers[0] < numbers[2])
				{
					write(1, numbers, 3);
					write (1, ", ", 2);
				}
				numbers[2]++;
			}
			numbers[2] = '0';
			numbers[1]++;
		}
		numbers[1] = '0';
		numbers[0]++;
	}
}
