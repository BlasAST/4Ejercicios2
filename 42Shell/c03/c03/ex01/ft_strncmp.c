/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 12:44:22 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/03 14:02:45 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || (s2[i] == '\0')
			|| (s1[i] == '\0'))
		{
			while (s2[i] != '\0' && s1[i] != '\0')
			{
				i++;
			}
			if (s1[i] == '\0')
				return (-1);
			else
				return (1);
		}
		i++;
	}
	return (0);
}
