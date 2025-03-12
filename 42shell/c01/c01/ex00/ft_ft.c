/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:12:14 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/02/26 13:42:18 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
void pr_putchar(char c)
{
	write (1, &c, 1);
}
void print_number(int n)
{
	pr_putchar(n / 10 + '0');
	pr_putchar(n % 10 + '0');
}

int main (void)
{
	int  y = 12;
	int *a = &y;
	print_number(*a);
	ft_ft(a);
	print_number(*a);
	print_number(y);
}*/
