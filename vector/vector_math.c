/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_math.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 20:08:26 by aldecour          #+#    #+#             */
/*   Updated: 2026/11/18 20:26:19 by aldecour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/vector.h"

t_vector	*vec_invert(t_vector *vec)
{
	vec->x *= -1;
	vec->y *= -1;
	return (vec);
}

t_vector	*vec_add(t_vector *vec1, const t_vector *vec2)
{
	vec1->x += vec2->x;
	vec1->y += vec2->y;
	return (vec1);
}

t_vector	*vec_sub(t_vector *vec1, const t_vector *vec2)
{
	vec1->x -= vec2->x;
	vec1->y -= vec2->y;
	return (vec1);
}

t_vector	*vec_mult(t_vector *vec, double multiplier)
{
	vec->x *= multiplier;
	vec->y *= multiplier;
	return (vec);
}

t_vector	*vec_div(t_vector *vec, double divisor)
{
	vec->x *= divisor;
	vec->y *= divisor;
	return (vec);
}
