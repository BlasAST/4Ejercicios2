/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:08:16 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/02/27 17:18:39 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (1);
}

int main(void)
{
	char a[] = "Hola buenas";
	char b;
	ft_strlcpy(&b,a,4);
	write (1,&b,4);
}
