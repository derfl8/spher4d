/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 16:34:29 by aldecour          #+#    #+#             */
/*   Updated: 2026/11/26 17:09:20 by aldecour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# include "../libft/libft.h"
# include <stdio.h>
# include <math.h>
# include <float.h>

typedef struct s_vector
{
	double		x;
	double		y;
}				t_vector;

t_vector	*vec_init(const double x, const double y);

char		*vec_to_str(const t_vector *vec);
double		vec_len(const t_vector *vec);
double		vec_len_sqrd(const t_vector *vec);

t_vector	vec_invert(const t_vector vec);
t_vector	vec_add(const t_vector vec1, const t_vector vec2);
t_vector	vec_sub(const t_vector vec1, const t_vector vec2);
t_vector	vec_mult(const t_vector vec, double multiplier);
t_vector	vec_div(const t_vector vec, double divisor);

t_vector	vec_abs(t_vector vec);
t_vector	vec_vid(const t_vector vec, double divisor);

double		vec_angle(const	t_vector *vec);
double		vec_dot_product(const t_vector *vec1, const t_vector *vec2);
//double		vec_cross_product(const t_vector *vec1, const t_vector *vec2);
double		vec_angle_between(const t_vector *vec1, const t_vector *vec2);

t_vector	*vec_rotate(t_vector *vec, const double angle);

#endif
