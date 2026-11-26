/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_alloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 15:10:18 by aldecour          #+#    #+#             */
/*   Updated: 2026/11/26 15:11:03 by aldecour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/vector.h"

t_vector	*vec_init(const double x, const double y)
{
	t_vector	*player;

	player = malloc(sizeof(t_vector));
	if (!player)
		return (NULL);
	player->x = x;
	player->y = y;
	return (player);
}
