/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_math2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 16:56:31 by aldecour          #+#    #+#             */
/*   Updated: 2026/11/28 17:30:03 by aldecour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/vector.h"

t_vec	vec_abs(t_vec vec)
{
	if (vec.x < 0)
		vec.x *= -1;
	if (vec.y < 0)
		vec.y *= -1;
	return (vec);
}

t_vec	vec_vid(const t_vec vec, double divisor)
{
	t_vec	res;

	res.x = divisor / vec.x;
	res.y = divisor / vec.y;
	return (res);
}
