/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:05:56 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/02/27 10:47:10 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	h;
	int	temp;

	i = 0;
	h = 0;
	temp = 0;
	while (i < size - 1)
	{
		while (h < size - i)
		{
			if (h != 0)
			{
				if (tab[h] < tab[h - 1])
				{
					temp = tab[h];
					tab[h] = tab[h - 1];
					tab[h - 1] = temp;
				}
			}
			h++;
		}
		h = 0;
		i++;
	}
}
/*
int	main(void)
{
	int array[7] = {4,7,2,3,8,1,5};
	ft_sort_int_tab(array,7);
	int  i = 0;
	while (i < 7)
	{
		i++;
	}
}
*/
