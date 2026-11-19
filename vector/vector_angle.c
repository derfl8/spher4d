/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_angle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 14:39:55 by aldecour          #+#    #+#             */
/*   Updated: 2026/11/19 17:47:39 by aldecour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/vector.h"

double		vec_angle(const	t_vector *vec)
{
	return (atan2(vec->y, vec->x));
}

double		vec_dot_product(const t_vector *vec1, const t_vector *vec2)
{
	return (vec1->x * vec2->x + vec1->y * vec2->y);
}

/*
double		vec_cross_product(const t_vector *vec1, const t_vector *vec2)
{
	return (vec1->x * vec2->y - vec1->y * vec2->x);
}
*/

double		vec_angle_between(const t_vector *vec1, const t_vector *vec2)
{
	double angle1;
	double angle2;

	angle1 = vec_angle(vec1);
	angle2 = vec_angle(vec2);
	return (angle1 - angle2);
}
