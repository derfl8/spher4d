/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_alloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 15:10:18 by aldecour          #+#    #+#             */
/*   Updated: 2026/11/28 17:26:36 by aldecour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/vector.h"

t_vec	*vec_init(const double x, const double y)
{
	t_vec	*player;

	player = malloc(sizeof(t_vec));
	if (!player)
		return (NULL);
	player->x = x;
	player->y = y;
	return (player);
}
