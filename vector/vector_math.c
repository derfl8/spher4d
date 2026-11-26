/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_math.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 20:08:26 by aldecour          #+#    #+#             */
/*   Updated: 2026/11/26 16:56:17 by aldecour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/vector.h"

t_vector	vec_invert(t_vector vec)
{
	vec.x = vec.x * -1;
	vec.y = vec.y * -1;
	return (vec);
}

t_vector	vec_add(const t_vector vec1, const t_vector vec2)
{
	t_vector	res;

	res.x = vec1.x + vec2.x;
	res.y = vec1.y + vec2.y;
	return (res);
}

t_vector	vec_sub(const t_vector vec1, const t_vector vec2)
{
	t_vector	res;

	res.x = vec1.x - vec2.x;
	res.y = vec1.y - vec2.y;
	return (res);
}

t_vector	vec_mult(const t_vector vec, double multiplier)
{
	t_vector	res;

	res.x = vec.x * multiplier;
	res.y = vec.y * multiplier;
	return (res);
}

t_vector	vec_div(const t_vector vec, double divisor)
{
	t_vector	res;

	res.x = vec.x / divisor;
	res.y = vec.y / divisor;
	return (res);
}
