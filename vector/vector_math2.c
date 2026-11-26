/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_math2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 16:56:31 by aldecour          #+#    #+#             */
/*   Updated: 2026/11/26 16:59:14 by aldecour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/vector.h"

t_vector	vec_abs(t_vector vec)
{
	if (vec.x < 0)
		vec.x *= -1;
	if (vec.y < 0)
		vec.y *= -1;
	return (vec);
}

t_vector	vec_vid(const t_vector vec, double divisor)
{
	t_vector	res;

	res.x = divisor / vec.x;
	res.y = divisor / vec.y;
	return (res);
}
