/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:45:50 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/12 16:36:54 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int args, char **argv)
{
	args = 0;
	while (*argv[0] != '\0')
		write(1, argv[0]++, 1);
	write(1, "\n", 1);
	return (0);
}
