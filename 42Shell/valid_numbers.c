
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
			count++;
		}
		i++;
	}
	return (count);
}

int	is_valid(char matriz[4][4], char *restricciones)
{
	int		i;
	char	x1[4];
	char	x2[4];
	char	y1[4];
	char	y2[4];

	i = 0;
	while (i < 4)
	{
		x1[0] = matriz[i][0];
		x1[1] = matriz[i][1];
		x1[2] = matriz[i][2];
		x1[3] = matriz[i][3];
		x2[0] = matriz[i][3];
		x2[1] = matriz[i][2];
		x2[2] = matriz[i][1];
		x2[3] = matriz[i][0];
		y1[0] = matriz[0][i];
		y1[1] = matriz[1][i];
		y1[2] = matriz[2][i];
		y1[3] = matriz[3][i];
		y2[0] = matriz[3][i];
		y2[1] = matriz[2][i];
		y2[2] = matriz[1][i];
		y2[3] = matriz[0][i];
		if (count_visible(y1) != restricciones[i]
			|| count_visible(y2) != restricciones[i + 4]
			|| count_visible(x1) != restricciones[i + 8]
			|| count_visible(x2) != restricciones[i + 12])
			return (0);
		i++;
	}
	return (1);
}

int	valid_number(char matriz[4][4], int f, int c, int i)
{
	int	x;

	x = 0;
	while (x < 4)
	{
		if (matriz[f][x] == i || matriz[x][c] == i)
			return (0);
		x++;
	}
	return (1);
}