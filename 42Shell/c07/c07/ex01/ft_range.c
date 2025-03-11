/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:07:58 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/11 13:42:57 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min == max || min > max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min));
	if (!array)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*
int	main(void)
{
	int min = 5, max = 100;
	int *ft = ft_range(min, max);
	int size = max - min;
	int i = 0;
	while (i < size)
	{
		printf("%d",ft[i]);
		i++;
	}
	return (0);
}
*/
