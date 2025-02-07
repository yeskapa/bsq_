/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tematthe <kapamatthews@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 20:00:54 by tematthe          #+#    #+#             */
/*   Updated: 2025/02/06 20:00:54 by tematthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>

typedef struct t_matrix
{
	int	**data;
	int	width;
	int	height;
}	t_matrix;

t_matrix	matrix_create(int width, int height);
void		matrix_print(t_matrix matrix, char empty_char, char obstacle_char);
void		matrix_find_biggest_square(t_matrix *matrix);

#endif