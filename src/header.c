/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tematthe <kapamatthews@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 22:20:09 by tematthe          #+#    #+#             */
/*   Updated: 2025/02/06 22:20:09 by tematthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>
#include <stdbool.h>

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

void	matrix_print(t_matrix matrix, char empty_char, char obstacle_char)
{
	int	i;
	int	j;

	i = 0;
	while (i < matrix.height)
	{
		j = 0;
		while (j < matrix.width)
		{
			if (matrix.data[i][j] == 1)
				printf("%c", obstacle_char);
			else if (matrix.data[i][j] == 0)
				printf("%c", empty_char);
			j++;
		}
		printf("\n");
		i++;
	}
}

boolean matrix_check_square(t_matrix matrix, int start_x, int start_y, int width, int height)
{
	int	i;
	int	j;

	i = start_y;
	while (i < height)
	{
		j = start_x;
		while (j < width)
		{
			if (matrix.data[i][j] == 1)
				return (false);
			j++;
		}
		printf("\n");
		i++;
	}
	return (true);
}

void matrix_find_biggest_square(t_matrix *matrix)
{

}