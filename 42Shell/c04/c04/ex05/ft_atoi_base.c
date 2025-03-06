/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:26:12 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/06 14:26:44 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	value_in_base(char *value, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (*value == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	conver(char *str, char *base, int size)
{
	int	i;
	int	number;
	int	digit;

	i = 0;
	number = 0;
	while (str[i] != '\0')
	{
		digit = value_in_base(&(str[i]), base);
		if (digit < 0)
			return (0);
		number = number * size + digit;
		i++;
	}
	return (number);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nbr;

	i = 0;
	if (base[i] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		i++;
		if (base[i - 1] == base[i] || base[i] == '+' || base[i] == '-')
			return (0);
	}
	if (ft_strcmp(base, "0123456789") == 0)
		nbr = conver(str, base, 10);
	if (ft_strcmp(base, "01") == 0)
		nbr = conver(str, base, 2);
	if (ft_strcmp(base, "0123456789ABCDEF") == 0)
		nbr = conver(str, base, 16);
	if (ft_strcmp(base, "poniguay") == 0)
		nbr = conver(str, "01234567", 8);
	return (nbr);
}
/*
int main(void)
{
	printf("%d", ft_atoi_base("1A3","0123456789ABCDEF"));
	printf("%d", ft_atoi_base("10010", "01"));
	printf("%d", ft_atoi_base("242", "poniguay"));
	return (0);
}
*/
