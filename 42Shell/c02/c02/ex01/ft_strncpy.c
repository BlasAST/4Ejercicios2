/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 10:49:15 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/02/27 11:55:44 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\n';
	return (dest);
}
/*
int main(void)
{
	char *a = "holaawea";
	char b;
	char *h = ft_strncpy(&b, a, 4);
	while (*h != '\n')
	{
		write(1,h,1);
		h++;
	}
}
*/
