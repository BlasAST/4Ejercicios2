/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:34:56 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/02/27 13:35:02 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 97 || *str > 122)
			return (0);
		str++;
	}
	return (1);
}
/*
int main(void)
{
	char	*a; 
	a = "holaa";
	char h = ft_str_is_lowercase(a) + '0';
	write (1, &h ,1);
	return (0);
}*/

