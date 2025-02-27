/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:57:37 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/02/27 13:06:43 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str < 48 || *str > 57) && (*str < 65 || *str > 90)
			&& (*str < 97 || *str > 122))
			return (1);
		str++;
	}
	return (0);
}
/*
int main(void)
{
	char	*a; 
	a = "1234*";
	char h = ft_str_is_alpha(a) + '0';
	write (1, &h ,1);
	return (0);
}
*/
