/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:54:08 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/01 21:04:27 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void put_char(char n)
{
        write(1, &n,1);
}

int count_visible(char xy[4])
{
	int max = 0;
	int count = 0;
	int i = 0;
	while (xy < 4)
	{
		if(xy[i] > max)
		{
			max = xy[i];
			count ++;
		}
	}
	return count;
}

void is_valid(char matriz[4][4],char *restricciones, int size)
{

	char x1[4];
	char y2[4];
	char x2[4];
	char y2[4];
	int i = 0;
	while (i < 4)
	{
		x1[] = {matriz[i][0],matriz[i][1],matriz[i][2],matrix[i][3]};
		x2[] = {matriz[i][3],matriz[i][2],matriz[i][1],matrix[i][0]};
		y1[] = {matriz[0][i],matriz[1][i],matriz[i][2],matrix[i][3]};
		y2[] = {matriz[3][i],matriz[2][i],matriz[i][1],matrix[i][0]};
		if (count_visible(x1) != restricciones[i])
			return 0;
		if (count_visible(x2) != restricciones[i + 4])
			return 0;
		if (count_visible(y1) != restricciones[i + 8])
			return 0;
		if (count_visible(y2) != restricciones[i + 12])
			return 0;
	}
	return 1;
}

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

void order_numbers(char matriz[4][4],  char *restricciones, int a)
{
	int x = 0;
	int y = 0;
	
	while(x < 16)
	{			
		while (y < 16)
		{

		}
	}

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

int main (int args, char **argv)
{

	char matriz[4][4] ={0};
	char restricciones[16];
	//int x = 0;
	//int y = 0;
	int i = 0;
	int h = 0;
	
	while (argv[1][i]!= '\0')
	{
		if(argv[1][i] != ' ')
		{
			restricciones[h] = argv[1][i];
			h++;
		}
		i++;	
	}
	/*
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
	*/
	order_numbers(matriz,restricciones,16);
	//print_numbers(matriz);
}
