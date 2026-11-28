/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_math.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 20:08:26 by aldecour          #+#    #+#             */
/*   Updated: 2026/11/28 17:29:56 by aldecour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/vector.h"

t_vec	vec_invert(t_vec vec)
{
	vec.x = vec.x * -1;
	vec.y = vec.y * -1;
	return (vec);
}

t_vec	vec_add(const t_vec vec1, const t_vec vec2)
{
	t_vec	res;

	res.x = vec1.x + vec2.x;
	res.y = vec1.y + vec2.y;
	return (res);
}

t_vec	vec_sub(const t_vec vec1, const t_vec vec2)
{
	t_vec	res;

	res.x = vec1.x - vec2.x;
	res.y = vec1.y - vec2.y;
	return (res);
}

t_vec	vec_mult(const t_vec vec, double multiplier)
{
	t_vec	res;

	res.x = vec.x * multiplier;
	res.y = vec.y * multiplier;
	return (res);
}

t_vec	vec_div(const t_vec vec, double divisor)
{
	t_vec	res;

	res.x = vec.x / divisor;
	res.y = vec.y / divisor;
	return (res);
}
