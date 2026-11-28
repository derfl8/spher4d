/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 16:34:29 by aldecour          #+#    #+#             */
/*   Updated: 2026/11/28 17:26:06 by aldecour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# include "../libft/libft.h"
# include <stdio.h>
# include <math.h>
# include <float.h>

typedef struct s_vec
{
	double		x;
	double		y;
}				t_vec;

t_vec		*vec_init(const double x, const double y);

char		*vec_to_str(const t_vec *vec);
double		vec_len(const t_vec *vec);
double		vec_len_sqrd(const t_vec *vec);

t_vec		vec_invert(const t_vec vec);
t_vec		vec_add(const t_vec vec1, const t_vec vec2);
t_vec		vec_sub(const t_vec vec1, const t_vec vec2);
t_vec		vec_mult(const t_vec vec, double multiplier);
t_vec		vec_div(const t_vec vec, double divisor);

t_vec		vec_abs(t_vec vec);
t_vec		vec_vid(const t_vec vec, double divisor);

double		vec_angle(const	t_vec *vec);
double		vec_dot_product(const t_vec *vec1, const t_vec *vec2);
//double		vec_cross_product(const t_vec *vec1, const t_vec *vec2);
double		vec_angle_between(const t_vec *vec1, const t_vec *vec2);

t_vec		*vec_rotate(t_vec *vec, const double angle);

#endif
