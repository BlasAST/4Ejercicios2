/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:37:32 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/11 14:56:29 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	i = 0;
	*range = (int *)malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*
int main(void)
{
	int max = 20, min = 10;
	int *ft = NULL;
	int size = ft_ultimate_range(&ft, min, max);
	printf("%d", size);
	int i = 0;
	while (i < size)
	{
		printf("%d",ft[i]);
		i++;
	}
	free(ft);
}
*/
