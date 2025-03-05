/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 15:07:19 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/04 14:58:12 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

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
			while (str[i + j] == to_find[j] && to_find[j] != '\0')
			{
				j++;
				if (to_find[j] == '\0')
					return (&(str[i]));
			}
		}
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	char a[] = "Hola buenas tardes";
	char b[] = "b";
	char *p = ft_strstr(a, b);

	while (*p != '\0')
	{
		write(1,p,1);
		p++;
	}
}
*/
