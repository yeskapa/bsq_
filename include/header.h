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
# include <stdbool.h>

typedef struct t_vec2
{
	int	x;
	int	y;
}	t_vec2;

typedef struct t_matrix
{
	int	**data;
	int	width;
	int	height;
}	t_matrix;

t_vec2		vec2_create(int x, int y);
t_matrix	matrix_create(int width, int height);
void		matrix_print(t_matrix matrix, char *characters);
bool		matrix_check_square(t_matrix matrix, t_vec2 start, int size);
int			matrix_get_largest_square(t_matrix matrix, t_vec2 position);
void		matrix_fill_square(t_matrix *matrix, t_vec2 start, int size);
void		matrix_fill_biggest_square(t_matrix *matrix);
void		matrix_random_fill(t_matrix *matrix, float density);

#endif