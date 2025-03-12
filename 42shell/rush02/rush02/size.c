/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnuno-im <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:20:23 by rnuno-im          #+#    #+#             */
/*   Updated: 2025/03/09 20:21:12 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Esta funcion sirve para imprimir cualquier cadena o char que se pase.
*/

#include "head.h"

void	ft_string(char *n)
{
	while (*n != '\0')
	{
		write(1, n++, 1);
	}
}

/*Funcion que realiza el cambio de string a int*/
int	ft_atoi(char *string, char delimiter)
{
	int	number;

	number = 0;
	while (*string != delimiter && *string != '\0')
	{
		if (*string == '+' || *string == '-' || *string < '0' && *string > '9')
			return (0);
		number *= 10;
		number += *string - '0';
		string++;
	}
	return (number);
}

/*Funcion que lee el archivo y devuelve un int que almacena
el tamaño total que va a tener el archivo para despues hacerlo
con un solo puntero en read_file*/
int	full_size(void)
{
	int		size;
	int		f;
	ssize_t	byte;
	char	linea[256];

	size = 0;
	f = open("numbers.dict", O_RDONLY);
	if (f == -1)
	{
		perror("Error");
		return (0);
	}
	byte = read(f, linea, sizeof(linea) - 1);
	while (byte > 0)
	{
		size += byte;
		byte = read (f, linea, sizeof(linea) - 1);
	}
	if (byte == -1)
	{
		perror("Error");
	}
	close (f);
	return (size);
}

/*Realiza una lectura completa del archivo en el mismo puntero
para asi poder trabajar con los datos completos*/
void	read_file(int num)
{
	int		size;
	ssize_t	full;
	char	*a;
	int		file;
	int	b;

	size = full_size();
	a = malloc(size + 1);
	file = open("numbers.dict", O_RDONLY);
	full = read(file, a, size);
	a[full] = '\0';
	while (*a != '\0')
	{
		if (*a != '\0')
			b = ft_atoi(a, ':');
		printf("%d", b);
		while (*a != '\n')
			a++;
		if (*a != '\0') 
			a++;
	}
}
