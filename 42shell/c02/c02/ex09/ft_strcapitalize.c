/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:12:38 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/12 22:54:21 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word;

	i = 0;
	word = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (word == 1)
				str[i] = str[i] - 32;
			word = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (word == 0)
				str[i] = str[i] + 32;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			word = 0;
		else
			word = 1;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char h[] = "salut, comment tu vas ? 42mots quaAAArante-deux;";
	ft_strcapitalize(h);
	int  i = 0;

	while (h[i] != '\0')
	{
		write (1, &(h[i]),1);
		i++;
	}
}
*/
