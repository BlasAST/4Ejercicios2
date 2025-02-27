/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:47:23 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/02/27 13:56:58 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
int	ft_str_is_printeable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str > 32 || *str < 47) && (*str < 58 || *str > 64)
			&& (*str < 91 || *str > 96) && (*str < 123 || *str > 126))
			return (0);
		str++;
	}
	return (1);
}
/*
int main(void)
{
	char	*a; 
	a = "[][==]";
	char h = ft_str_is_printeable(a) + '0';
	write (1, &h ,1);
	return (0);
}
*/
