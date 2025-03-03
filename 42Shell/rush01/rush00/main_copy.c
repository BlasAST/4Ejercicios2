/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:54:08 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/02 13:41:17 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char n);
int	count_visible(char xy[4]);
int	is_valid(char matriz[4][4], char *restricciones);
int	valid_number(char matriz[4][4], int f, int c, int i);

int	order_numbers(char matriz[4][4], char *res, int pos)
{
	int	fila;
	int	col;
	int	num;

	if (pos == 16)
		return (is_valid(matriz, res));
	fila = pos / 4;
	col = pos % 4;
	num = 1;
	while (num <= 4)
	{
		if (valid_number(matriz, fila, col, num))
		{
			matriz[fila][col] = num;
			if (order_numbers(matriz, res, pos + 1))
				return (1);
			matriz[fila][col] = '0';
		}
		num++;
	}
	return (0);
}

void	print_numbers(char matriz[4][4])
{
	int	x;
	int	y;
	char	a;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			a = matriz[x][y] + '0';
			put_char(a);
			y++;
		}
		put_char('\n');
		x++;
	}
}

int	main(int args, char **argv)
{
	char	matriz[4][4] = {0};
	char	restricciones[16];
	int		i;
	int		h;

	i = 0;
	h = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] != ' ')
		{
			restricciones[h] = argv[1][i] - '0';
			h++;
		}
		i++;
	}
	if (order_numbers(matriz, restricciones, 0))
		print_numbers(matriz);
	else
		write(1, "Error",5);
}

