/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 18:42:50 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/06 19:33:02 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power >= 1)
		res *= nb * ft_recursive_power(nb, power - 1);
	return (res);
}
/*
int main(void)
{
	printf("%d", ft_recursive_power(2,4));
}
*/
