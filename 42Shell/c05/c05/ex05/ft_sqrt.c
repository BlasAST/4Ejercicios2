/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:01:19 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/10 18:56:32 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i <= 46340 && i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
/*
int main(void)
{

	printf("%d", ft_sqrt(-12));
}
*/
