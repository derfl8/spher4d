/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 14:12:17 by aldecour          #+#    #+#             */
/*   Updated: 2026/11/28 17:29:43 by aldecour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/vector.h"

double		vec_len(const t_vec *vec)
{
	if (vec->x > (DBL_MAX / fabs(vec->x)) || vec->y > (DBL_MAX / fabs(vec->y)))
		return (DBL_MAX);
	return (sqrt(vec->x * vec->x + vec->y * vec->y));
}

double		vec_len_sqrd(const t_vec *vec)
{
	if (vec->x > (DBL_MAX / fabs(vec->x)) || vec->y > (DBL_MAX / fabs(vec->y)))
		return (DBL_MAX);
	return (fabs(vec->x * vec->x + vec->y * vec->y));
}
