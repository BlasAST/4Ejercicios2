/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:46:47 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/10 13:47:18 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int args, char **argv)
{
	int	i;

	i = 1;
	while (i != args)
	{
		while (*argv[i] != '\0')
			write(1, argv[i]++, 1);
		write(1, "\n", 1);
		i++;
	}
}
