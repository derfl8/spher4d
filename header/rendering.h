/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rendering.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 14:26:38 by aldecour          #+#    #+#             */
/*   Updated: 2026/11/26 20:10:53 by aldecour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RENDERING_H
# define RENDERING_H

# include <stdbool.h>
# include "spher4d.h"
# include "vector.h"

# define SIDE_NS 0
# define SIDE_EW 1

struct s_data;

typedef struct s_int_coords
{
	int			x;
	int			y;
}				t_int_coords;

typedef struct s_dda_data
{
	t_int_coords	step;
	t_vector		side_dist;
}					t_dda_data;

//INIT
int			raycasting(struct s_data *data);

#endif
