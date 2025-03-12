/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:42:08 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/12 19:59:23 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	numbers [3];

	numbers[0] = '0';
	numbers[1] = '1';
	numbers[2] = '2';
	while (numbers[0] != '9')
	{
		while (numbers[1] != '9')
		{
			while (numbers[2] != '9')
			{
				if (numbers[0] < numbers[2])
				{
					write(1,numbers,3);
				}
				numbers[2]++;
			}
			 numbers[1]++;
		}
		numbers[0]++;
	}
}

int	main(void)
{
	ft_print_comb();
}
