/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tematthe <kapamatthews@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:03:01 by tematthe          #+#    #+#             */
/*   Updated: 2025/02/07 18:03:01 by tematthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

t_matrix	matrix_create(int width, int height)
{
	t_matrix	result;
	int			i;
	int			j;

	result.width = width;
	result.height = height;
	result.data = (int **)malloc(sizeof(int *) * height);
	i = 0;
	while (i < height)
	{
		result.data[i] = (int *)malloc(sizeof(int ) * width);
		j = 0;
		while (j < width)
		{
			result.data[i][j] = 0;
			j++;
		}
		i++;
	}
	return (result);
}

void	matrix_random_fill(t_matrix *matrix, float density)
{
	int	i;
	int	j;

	srand(time(NULL));
	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 10)
		{
			if (((float)rand() / (float)RAND_MAX) <= density)
				matrix->data[i][j] = 1;
			j++;
		}
		i++;
	}
}

void	matrix_fill_square(t_matrix *matrix, t_vec2 start, int size)
{
	t_vec2	position;

	position = vec2_create(0, 0);
	while (position.y < size)
	{
		position.x = 0;
		while (position.x < size)
		{
			matrix->data[position.y + start.y][position.x + start.x] = 2;
			position.x++;
		}
		position.y++;
	}
}

void	matrix_fill_biggest_square(t_matrix *matrix)
{
	t_vec2	position;
	t_vec2	biggest_square_position;
	int		size;
	int		biggest_square_size;

	position = vec2_create(0, 0);
	biggest_square_size = 0;
	while (position.y < matrix->height)
	{
		position.x = 0;
		while (position.x < matrix->width)
		{
			size = matrix_get_largest_square(*matrix, position);
			if (size > biggest_square_size)
			{
				biggest_square_position = vec2_create(position.x, position.y);
				biggest_square_size = size;
			}
			position.x++;
		}
		position.y++;
	}
	matrix_fill_square(matrix, biggest_square_position, biggest_square_size);
}
