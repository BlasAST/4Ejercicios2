/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:53:07 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/02/26 11:25:30 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_char(int x, int y, int temp_x, int temp_y)
{
	if ((temp_x == 1 && temp_y == 1) || (temp_x == x && temp_y == 1)
		|| (temp_x == 1 && temp_y == y) || (temp_x == x && temp_y == y))
	{
		ft_putchar ('o');
	}
	else if (temp_x == 1 || temp_x == x)
	{
		ft_putchar ('|');
	}
	else if (temp_y == 1 || temp_y == y)
	{
		ft_putchar ('-');
	}
	else
	{
		ft_putchar (' ');
	}
}

void	rush(int x, int y)
{
	int	temp_x;
	int	temp_y;

	temp_x = 1;
	temp_y = 1;
	while (temp_y <= y)
	{
		while (temp_x <= x)
		{
			print_char (x, y, temp_x, temp_y);
			temp_x++;
		}
		temp_x = 1;
		temp_y++;
		ft_putchar ('\n');
	}
}
