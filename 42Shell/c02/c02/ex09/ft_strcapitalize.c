/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:12:38 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/03 12:35:14 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int word;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9') && (str[i] < 'A' || str[i] > 'Z')
			&& (str[i] < 'a' || str[i] > 'z'))
			word = 0;
		else
			if (word == 0 && str[i] >= 'a' && str[i] <= 'z'
				|| i == 0 && str[i] >= 'a' && str[i] <= 'z') 
			{
				str[i] = str[i] - 32;
				word = 1;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			else
				word = 1;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char h[] = "salut, comment tu vas ? 42mots quaAAArante-deux; cinquante+et+un";
	ft_strcapitalize(h);
	int  i = 0;

	while (h[i] != '\0')
	{
		write (1, &(h[i]),1);
		i++;
	}
}
*/