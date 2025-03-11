/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:55:57 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/10 13:33:53 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	find_digit(int digit)
{
	int	i;

	i = 2;
	while (i < digit)
	{
		if (digit % i == 0 && i != digit)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	digit;

	digit = nb;
	if (nb == 0 || nb == 1)
		return (0);
	while (1)
	{
		if (find_digit(digit) != 0)
			return (digit);
		digit++;
	}
	return (0);
}
/*
int	main()
{
	printf("%d",ft_find_next_prime(3));
}
*/
