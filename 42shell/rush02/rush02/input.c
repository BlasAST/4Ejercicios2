/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnuno-im <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:19:07 by rnuno-im          #+#    #+#             */
/*   Updated: 2025/03/09 19:38:07 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

/*Funcion a la que se le pasará el numero que se desea convertir en
palabra y funcionará junto con read_file*/
void	find_in_file(int num, int pos)
{
	if (pos == 0)
		return ;
	read_file(num);
}

/*Funcion que cuenta la cantidad de digitos que se almacenan en el numero
que nos pasan para posteriormente ir pintando el numero correspondiente*/
int	count_digits(int number)
{
	int	i;

	i = 1;
	while (number >= 10)
	{
		number /= 10;
		i++;
	}
	return (i);
}
/*Funcion que realiza la conversión de un entero a la palabra que tiene que
imprimirse*/

int	ft_itoa(int number)
{
	int	digits;

	if (number <= 0)
		return (0);
	digits = count_digits(number);
	if (number < 20)
	{
		return (digits);
	}
	find_in_file(number, digits);
	return (digits);
}

int	main(void)
{
	int	number;
	int	number2;

	number = ft_atoi("12345",'\0' );
	number2 = ft_itoa(number);
	return (0);
}
