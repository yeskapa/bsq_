/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tematthe <kapamatthews@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 19:54:44 by tematthe          #+#    #+#             */
/*   Updated: 2025/02/06 19:54:44 by tematthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "header.h"

int	main(void)
{
	t_matrix	matrix;

	matrix = matrix_create(10, 5);
	matrix_random_fill(&matrix, 0.2);
	printf("randomised matrix:\n");
	matrix_print(matrix, "_ox");
	matrix_fill_biggest_square(&matrix);
	printf("\nsolved matrix?:\n");
	matrix_print(matrix, "_ox");
	return (1);
}
