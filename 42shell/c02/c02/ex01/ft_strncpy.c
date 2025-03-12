/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 10:49:15 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/03 15:31:40 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
			return (dest);
		}
		i++;
	}
	return (dest);
}
/*
int main(void)
{
	char *a = "holaawea";
	char b[8];
	char *h = ft_strncpy(b, a, 9);
	while (*h != '\0')
	{
		write(1,h,1);
		h++;
	}
}
*/