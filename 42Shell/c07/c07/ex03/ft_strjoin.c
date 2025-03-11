/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:03:21 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/11 16:42:06 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *pos)
{
	int	i;

	i = 0;
	while (*pos)
	{
		i++;
		pos++;
	}
	return (i);
}

int	ft_size_arr(char **strs)
{

}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *a;
	return a;
}

int	main(void)
{
	int	i;

	i = 0;
	char	*array[4] = {"e", "", "", ""};
	printf("%lu", (char )sizeof(array));
	//char *x;
	//*x = ft_strjoin(4,array,":");
	while (i < 4)
	{
		printf("%s", array[i]);
		i++;
	}
	return (0);
}
