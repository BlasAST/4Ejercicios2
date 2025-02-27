/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:12:38 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/02/27 17:05:03 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 97 && str[i] <= 122)
		str[i] = str[i] - 32;
	while (str[i] != '\0')
	{
		if ((str[i] < 48 || str[i] > 57) && (str[i] < 65 || str[i] > 90)
                        && (str[i] < 97 || str[i] > 122))
		{
			if(str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return str;
}
/*
int	main()
{
	char h[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(h);
	int  i = 0;

	while (h[i] != '\0')
	{
		write (1, &(h[i]),1);
		i++;
	}
}
*/
