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
#include <time.h>
#include "header.h"

int	main(void)
{
	t_matrix	test;
	int 		i;
	int 		j;

	srand ( time(NULL) );
	test = matrix_create(10, 5);
	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 10)
		{
			if (((float )rand() / (float)RAND_MAX) < 0.2)
				test.data[i][j] = 1;
			j++;
		}
		i++;
	}
	matrix_print(test, '_', 'o');
	return (1);
}
