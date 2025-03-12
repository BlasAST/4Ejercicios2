/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:03:21 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/12 19:02:08 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *len)
{
	int	i;

	i = 0;
	while (len[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_size_arr(char **strs, int size, char *sep)
{
	int	i;
	int	all_size;

	i = 0;
	all_size = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		all_size += ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
		all_size += ft_strlen(sep) * (size - 1);
	return (all_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*a;
	int		i;
	int		j;
	int		k;

	a = (char *)malloc(sizeof(char) * (ft_size_arr(strs, size, sep) + 1));
	if (!a)
		return (NULL);
	i = 0;
	k = 0;
	while (size != 0 && i < size)
	{
		j = 0;
		while (strs[i][j])
			a[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				a[k++] = sep[j++];
		}
		i++;
	}
	a[k] = '\0';
	return (a);
}
/*
int	main(void)
{
	int	i;

	i = 0;
	char	*array[] = {"eres", "un", "genio", "amigo"};
	char *x;
	x = ft_strjoin(4,array,":");
	printf("%s", x);
	free(x);
	return (0);
}
*/
