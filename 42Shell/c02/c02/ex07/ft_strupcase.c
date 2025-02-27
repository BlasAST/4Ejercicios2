/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 14:07:40 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/02/27 16:08:09 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		} 
		else
			str[i] = str[i];
		write(1, &(str[i]), 1);
		i++;
	}
	return str;
}
/*
int main (void)
{
	char a[]= "hola buen3s Tardes";
	ft_strupcase(a);
}
*/
