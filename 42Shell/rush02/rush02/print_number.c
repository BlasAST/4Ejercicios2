/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnuno-im <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:39:32 by rnuno-im          #+#    #+#             */
/*   Updated: 2025/03/08 18:55:27 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_itoa(int number)
{
	int digits;
	
	digits = count_digits(number);
	printf("%d",digits);
	if (number <= 20)
	{

	}
	else
	{
		
	}
	ft_itoa(number / 10);
}
