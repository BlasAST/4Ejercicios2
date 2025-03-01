/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:54:08 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/01 17:32:45 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void order_numbers(char matriz[4][4], char args)
{
	int x;
	int y;
	x = 0;
	y = 0;

	while (x < 4)
	{
		while (y < 4)
		{
			
			y++;
		}
		y = 0;
		x++;
	}
}

/*
 * Mirar el eje X, ordenar con combinaciones
 * Mirar el eje y, ordenar con combinaciones 
 * 1234
 * 4321
 * 3412
 * 2143
 * 2 -1 2 3 4 -1
 */

void mover_pos_x(char matriz[4][4],char x, char pos1, char pos2)
{
	char temp = matriz[x][pos1];
	matriz[x][pos1] = matriz[x][pos2];
	matriz[x][pos2] = temp;
}
void mover_pos_y(char matriz[4][4], char x, char pos1, char pos2)
{
	char temp = matriz[pos1][x];
	matriz[pos1][x] = matriz[pos2][x];
	matriz[pos2][x] = matriz[pos1][x];
}



void put_char(char n)
{
	write(1, &n,1);
}

void print_numbers(char matriz[4][4])
{
	int x;
	int y;
	x = 0;
	y = 0;
	while (x < 4)
	{
		while(y < 4)
		{
			char a = matriz[x][y] + '0';
			put_char(a);
			y++;
		}
		put_char('\n');
		y = 0;
		x++;
	}
}

int main (void)
{

	char matriz[4][4];
	
	int x = 0;
	int y = 0;
	while (x != 4)
	{
		while (y != 4)
		{
			matriz[x][y] = y + 1;
			y++;
		}
		y = 0;
		x++;
	}
	order_numbers(matriz,"");
	print_numbers(matriz);
}
