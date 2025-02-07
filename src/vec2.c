/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tematthe <kapamatthews@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:42:29 by tematthe          #+#    #+#             */
/*   Updated: 2025/02/07 12:42:29 by tematthe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_vec2	vec2_create(int x, int y)
{
	t_vec2	result;

	result.x = x;
	result.y = y;
	return (result);
}
