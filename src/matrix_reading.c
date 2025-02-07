/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_reading.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tematthe <kapamatthews@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:02:55 by tematthe          #+#    #+#             */
/*   Updated: 2025/02/07 18:02:55 by tematthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>
#include <stdbool.h>

bool	matrix_check_square(t_matrix matrix, t_vec2 start, int size)
{
	t_vec2	position;

	position = vec2_create(0, 0);
	while (position.y <= size)
	{
		position.x = 0;
		while (position.x <= size)
		{
			if (position.y + start.y >= matrix.height
				|| position.x + start.x >= matrix.width
				|| position.y + start.y < 0
				|| position.x + start.x < 0
				|| matrix.data[position.y + start.y][position.x + start.x] == 1)
				return (false);
			position.x++;
		}
		position.y++;
	}
	return (true);
}

int	matrix_get_largest_square(t_matrix matrix, t_vec2 position)
{
	int	size;

	size = 1;
	while (matrix_check_square(matrix, position, size))
		size++;
	return (size);
}

void	matrix_print(t_matrix matrix, char *characters)
{
	int	i;
	int	j;

	i = 0;
	while (i < matrix.height)
	{
		j = 0;
		while (j < matrix.width)
		{
			printf("%c", characters[matrix.data[i][j]]);
			j++;
		}
		printf("\n");
		i++;
	}
}
