/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:47:35 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/10 13:47:41 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int args, char **argv)
{
	while (args > 1)
	{
		while (*argv[args - 1] != '\0')
			write(1, argv[args - 1]++, 1);
		write(1, "\n", 1);
		args--;
	}
}
