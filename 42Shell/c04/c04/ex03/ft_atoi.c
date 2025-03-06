/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:41:26 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/05 18:47:36 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	ft_atoi(char *str)
{
	int	number;
	int	pos;
	int	i;

	number = 0;
	i = 0;
	pos = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			number *= 10;
			number += str[i] - '0';
		}
		else if (str[i] == '+')
			pos++;
		else if (str[i] == '-')
			pos--;
		else if (str[i] != ' ')
			break ;
		i++;
	}
	if (pos < 0 && pos % 2 != 0)
		number = -number;
	return (number);
}
/*
int	main(void)
{
	printf("%d",(ft_atoi(" ----+++   12345")));
}
*/
