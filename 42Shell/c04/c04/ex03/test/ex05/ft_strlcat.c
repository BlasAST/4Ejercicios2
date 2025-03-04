/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:59:09 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/04 17:45:55 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (dest[j] != '\0')
		j++;
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (j + i);
}

int main (void)
{
	char a[] = "Hola buenas tardes";
	char b[]  = "si" ;
	char c = ft_strlcat(b,a,5) + '0';
	write(1,&c,1);
	int  i = 0;
	while (b[i] != '\0')
	{
		write(1,&(b[i]),1);
		i++;
	}

	return  (0);
}

