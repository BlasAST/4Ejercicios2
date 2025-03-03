/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 15:07:19 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/03 15:47:34 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	char	*valid;

	i = 0;
	valid;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[i])
		{
			valid = &(str[i]);
			while(str[i] != '\0')
			{
				if(str[i] != to_find)
				{
					valid = NULL;
				}
				i++;
			}
		}
		i++;
	}
	return valid;
}

int main(void)
{
	char a[] = "Hola buenas tardes";

	char *p = ft_strstr(a, "bue");

	while (*p != '\0')
	{
		write(1,p++,1);
	}
}
