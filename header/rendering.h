/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rendering.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 14:26:38 by aldecour          #+#    #+#             */
/*   Updated: 2026/11/28 20:12:04 by aldecour         ###   ########.fr       */
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
struct s_map;

typedef struct s_intmap
{
	int			x;
	int			y;
}				t_intmap;

typedef struct s_dda_data
{
	t_intmap		step;
	t_vec			side_dist;
}					t_dda_data;

//INIT
int			raycasting(struct s_data *data);

//perform dda
double		dda_start(t_vec *p_coords, t_vec ray_dir, struct s_map map);

#endif
