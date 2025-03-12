/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiguenc <bsiguenc@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:26:14 by bsiguenc          #+#    #+#             */
/*   Updated: 2025/03/09 19:37:30 by bsiguenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_HEADER_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#define FOO "bar"

struct	s_struct;
void	ft_string(char *n);
int		ft_atoi(char *string, char delimiter);
int		full_size(void);
void	read_file(int num);
