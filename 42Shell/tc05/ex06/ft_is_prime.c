/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:34:26 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/07 13:42:54 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	find;

	i = 1;
	find = 0;
	while (i <= nb)
	{
		if (nb % i == 0 && i != 1 && i != nb)
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{

	printf("%d", ft_is_prime(7));
}
