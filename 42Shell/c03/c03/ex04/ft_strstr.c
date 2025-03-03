/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 15:07:19 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/03 18:21:14 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while(str[i + j] == to_find[j])
			{
				j++;
				if(to_find[j] == '\0')
				{
					return ( &to_find[i]);
				}

			}
		}
		i++;
	}
	return "hOLC";
}

int main(void)
{
	char a[] = "Hola buenas tardes";
	char b[] = "bue";
	char *p = ft_strstr(a, b);

	while (*p != '\0')
	{
		write(1,p,1);
		p++;
	}
}
