/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igrodrig <igrodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:54:08 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/02 19:54:05 by igrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char n)
{
	write(1, &n, 1);
}
/*
basicamente hacemoss que al declarar max, se guarde el elemento mas alto de la fila
y lueo establecemos count, que se encarga de contar los valores
visibles desde ccada lado, esto ahce que al recorrer ell arreglo con xy[i]
s esto es > que max, ignifica que un edificio nuevo es isible
y actualiza max e incrementa count, es decir, que un edificio es isible y acctualiza max apra cambiar la amyor altura

*/
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
			count++;
		}
		i++;
	}
	return (count);
}

/*
** get_lines agrupa x1, x2, y1, y2 en un solo array lines[16]:
**  - lines[0..3]   -> x1
**  - lines[4..7]   -> x2
**  - lines[8..11]  -> y1
**  - lines[12..15] -> y2
*/

static void	get_lines(char matriz[4][4], int i, char lines[16])
{
	lines[0] = matriz[i][0];
	lines[1] = matriz[i][1];
	lines[2] = matriz[i][2];
	lines[3] = matriz[i][3];
	lines[4] = matriz[i][3];
	lines[5] = matriz[i][2];
	lines[6] = matriz[i][1];
	lines[7] = matriz[i][0];
	lines[8] = matriz[0][i];
	lines[9] = matriz[1][i];
	lines[10] = matriz[2][i];
	lines[11] = matriz[3][i];
	lines[12] = matriz[3][i];
	lines[13] = matriz[2][i];
	lines[14] = matriz[1][i];
	lines[15] = matriz[0][i];
}
/*
Lo que hace es basicamente verificar si la matriz entera cumple las medidas,
antes creamos unos parametros que son x1, x2, y1, y2, que reresentan izquierda derecha
o arriba abajo, y con count_visble contamos los visicbles y los comparamos
con las restriccciones incciales, si se cumplen, es que la matriz es valida
*/
int	is_valid(char matriz[4][4], char *restricciones)
{
	int		i;
	char	lines[16];

	i = 0;
	while (i < 4)
	{
		get_lines(matriz, i, lines);
		if (count_visible(&lines[8]) != restricciones[i]
			|| count_visible(&lines[12]) != restricciones[i + 4]
			|| count_visible(&lines[0]) != restricciones[i + 8]
			|| count_visible(&lines[4]) != restricciones[i + 12])
			return (0);
		i++;
	}
	return (1);
}
/*
verifica que e numero que se coloca en una posicion, sea valido segun la regla
de que no pueden repetirse el mismo numero en filas y columnas.
*/
int	valid_number(char matriz[4][4], int f, int c, int val)
{
	int	x;

	x = 0;
	while (x < 4)
	{
		if (matriz[f][x] == val || matriz[x][c] == val)
			return (0);
		x++;
	}
	return (1);
}
