/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:53:03 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/03 13:45:22 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	while (i < size / 2)
	{
		pos = *(tab + i);
		*(tab + i) = *(tab + size - i - 1);
		*(tab + size - i - 1) = pos;
		i++;
	}
}
/*
int main(void)
{
	int array[] = {1,2,3,4,5,6,7,8,9};
	ft_rev_int_tab(array, 9);

	int i = 0;
	while (i < 9)
	{
		i++;
	}
}*/
