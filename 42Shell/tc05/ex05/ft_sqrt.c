/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:01:19 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/07 13:21:46 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i < nb / 2 && i * i != nb)
		i++;
	if (i * i != nb)
		return (0);
	return (i);
}
/*
int main(void)
{

	printf("%d", ft_sqrt(257));
}
*/
