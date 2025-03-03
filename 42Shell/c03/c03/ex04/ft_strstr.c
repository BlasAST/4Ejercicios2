/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 15:07:19 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/03 17:23:35 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			while(str[i + j] == to_find[j])
			{
				if(to_find[j] == '\0')
				{
					write (1, "valid", 5);
					return ( &str[i]);
				}
				j++;
			}
		}
		i++;
	}
	return "\0";
}

int main(void)
{
	char a[] = "Hola buenas tardes";

	char *p = ft_strstr(a, "bue");

	while (*p != '\0')
	{
		write(1,p,1);
		p++;
	}
}
