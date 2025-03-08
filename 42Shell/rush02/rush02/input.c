/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnuno-im <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:19:07 by rnuno-im          #+#    #+#             */
/*   Updated: 2025/03/08 18:55:09 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"
/*
Esta funcion sirve para imprimir cualquier cadena o char que se pase.
*/
void ft_string(char *n)
{
	while (*n != '\0')
	{
		write(1, n++,1);
	}
}

/*Sirve para imprimir la totalidad del fichero*/
void     print_file(void)
{
        int f = open("numbers.dict", O_RDONLY);
        if (f == -1)
        {
                perror("Error");
                return ;
        }
        char linea[256];
        ssize_t byte;
        while ((byte = read(f, linea ,sizeof(linea) - 1) ) > 0)
        {
                linea[byte] = '\0';
                printf("%s", linea);
        }
        if (byte == -1)
        {
                perror("Error");
        }
        close (f);
        return ;
}

/*Funcion que realiza el cambio de string a int*/
int	ft_atoi(char *string)
{
	int	number;

	number = 0;
	while (*string != '\0')
	{
		if (*string == '+' || *string == '-')
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
int	full_size()
{
	int	size;

	size = 0;
	int f = open("numbers.dict", O_RDONLY);
        if (f == -1)
        {
            perror("Error");
            return (0);
        }
        char linea[256];
        ssize_t byte;
        while ((byte = read(f, linea ,sizeof(linea) - 1) ) > 0)
        {
            size += byte;
        }
        if (byte == -1)
        {
                perror("Error");
        }
        close (f);
        return size;

}
/*Realiza una lectura completa del archivo en el mismo puntero
para asi poder trabajar con los datos completos*/
void read_file(int num)
{
	int size;

	size = full_size();

	char *a = malloc (size + 1);
	int file = open("numbers.dict", O_RDONLY);
	ssize_t full = read(file, a, size);
	a[full] = '\0';
	while (*a != '\0')
	{
		if (*a != '\n')
			write(1, a, 1);
		a++;
	}
}
/*Funcion a la que se le pasará el numero que se desea convertir en
palabra y funcionará junto con read_file*/
void find_in_file(int num, int pos)
{
	char number[pos];
	if (pos == 0)
		return ;
	read_file(num);

}
/*Funcion que cuenta la cantidad de digitos que se almacenan en el numero
que nos pasan para posteriormente ir pintando el numero correspondiente*/
int     count_digits(int number)
{
        int     i;

        i = 1;
        while (number >= 10)
        {
                number/=10;
                i++;
        }
	return (i);
}
/*Funcion que realiza la conversión de un entero a la palabra que tiene que
imprimirse*/
int    ft_itoa(int number)
{
	int digits;

	if (number <= 0)
		return (0);
	digits = count_digits(number);

	if (number < 20)
	{

	}
		find_in_file(number, digits);

	return (digits);
}

int	main(void)
{
	int number = ft_atoi("12345");
	printf("%d", number);
	int number2 = ft_itoa(number);
	//printf("\n %d", number2);
	//ft_string(number + '0');
	//print_file();
	return (0);
}


