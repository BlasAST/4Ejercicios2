/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:54:08 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/02 13:33:14 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	put_char(char n)
{
	write(1, &n, 1);
}

int	count_visible(char xy[4])
{
	int	max;
	int	count;
	int	i;

	max = 0;
	count = 0;
	i = 0;
	while (i < 4)
	{
		if (xy[i] > max)
		{
			max = xy[i];
			count ++;
		}
		i ++;
	}
	return (count);
}

int	is_valid(char matriz[4][4], char *restricciones)
{
	int	i;
	char x1[4];
	char x2[4];
	char y1[4];
	char y2[4];

	i = 0;
	while (i < 4)
	{
		char	x1[4] = {matriz[i][0], matriz[i][1], matriz[i][2], matriz[i][3]};
		char	x2[4] = {matriz[i][3], matriz[i][2], matriz[i][1], matriz[i][0]};
		char	y1[4] = {matriz[0][i],matriz[1][i],matriz[2][i],matriz[3][i]};
		char	y2[4] = {matriz[3][i],matriz[2][i],matriz[1][i],matriz[0][i]};
		if (count_visible(y1) != restricciones[i]
				||count_visible(y2) != restricciones[i + 4]
				|| count_visible(x1) != restricciones[i + 8]
				|| count_visible(x2) != restricciones[i + 12])
			return (0);
		i++;
	}
	return (1);
}
int	valid_number(char matriz[4][4],int f, int c, int i)
{
	int x;
	int y;


	x = 0;
	y = 0;
	while (x < 4)
	{
			if(matriz[f][x] == i || matriz[x][c] == i)
				return (0);
			x++;
	}
	return (1);

}

int	order_numbers(char matriz[4][4],  char *res, int pos)
{
	if (pos == 16)
		return is_valid(matriz,res);
	int fila;
	int col;
	int num;

	fila = pos / 4;
	col = pos % 4;
	num = 1;
	while (num <= 4)
	{
		if(valid_number(matriz,fila,col,num))
		{
			matriz[fila][col] = num;
			if(order_numbers(matriz, res, pos+1))
				return 1;
			matriz[fila][col] = 0;
		}
		num++;
	}
	return 0;
}

void	print_numbers(char matriz[4][4])
{
	int x;
	int y;
	char a;

	x = 0;
	y = 0;
	while (x < 4)
	{
		while(y < 4)
		{
			a = matriz[x][y] + '0';
			put_char(a);
			y++;
		}
		put_char('\n');
		y = 0;
		x++;
	}
}

int	main (int args, char **argv)
{

	char matriz[4][4] ={0};
	char restricciones[16];
	int i = 0;
	int h = 0;
	
	while (argv[1][i]!= '\0')
	{
		if(argv[1][i] != ' ')
		{
			restricciones[h] = argv[1][i] - '0';
			h++;
		}
		i++;	
	}
	if(order_numbers(matriz,restricciones,0))
	{
		print_numbers(matriz);
	}
}
