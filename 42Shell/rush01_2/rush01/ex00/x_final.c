/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:54:08 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/02 13:41:17 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char n);
int		count_visible(char xy[4]);
int		is_valid(char matriz[4][4], char *restricciones);
int		valid_number(char matriz[4][4], int f, int c, int i);
int		order_numbers(char matriz[4][4], char *res, int pos);
void	print_numbers(char 
					matriz[4][4]);

/*
** Basicamente se encarga de llenar la matriz entera mediante backtracing.
** Si la posicion es 16, lo que significa que la matriz esta entera, comprueba
** si es valida. Con cada combinacion, si aun no esta llena, va rellenandola
** con la condicion de valid_number y vuelve a ver si es valida al llegar
** a la posicion 16.
*/
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
			matriz[fila][col] = 0;
		}
		num++;
	}
	return (0);
}

/*
** imprime la matriz
*/
void	print_numbers(char matriz[4][4])
{
	int		x;
	int		y;
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

/*
** parse_args:
**  - Comprueba que argc == 2.
**  - Extrae 16 dígitos del argumento (ignorando espacios) y los guarda en
**    'restricciones'.
**  - Si no hay exactamente 16 dígitos, imprime "Error\n" y retorna 0.
*/
static int	parse_args(int argc, char **argv, char *restricciones)
{
	int	i;
	int	h;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 0;
	h = 0;
	while (argv[1][i])
	{
		if (argv[1][i] != ' ')
		{
			restricciones[h] = argv[1][i] - '0';
			h++;
		}
		i++;
	}
	if (h != 16)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}

/*
** fill_matrix:
** Inicializa la matriz 4x4 poniéndola toda en 0.
*/
static void	fill_matrix(char matriz[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			matriz[i][j] = 0;
			j++;
		}
		i++;
	}
}

/*
** main:
** - Llama a parse_args para validar y cargar las restricciones.
** - Llena la matriz con ceros.
** - Llama a order_numbers para intentar resolver.
** - Si se resuelve, imprime la matriz; si no, "Error\n".
*/
int	main(int argc, char **argv)
{
	char	matriz[4][4];
	char	restricciones[16];

	if (!parse_args(argc, argv, restricciones))
		return (1);
	fill_matrix(matriz);
	if (order_numbers(matriz, restricciones, 0))
		print_numbers(matriz);
	else
		write(1, "Error\n", 6);
	return (0);
}
