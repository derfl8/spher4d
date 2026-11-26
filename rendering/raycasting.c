/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 14:46:08 by aldecour          #+#    #+#             */
/*   Updated: 2026/11/26 20:14:46 by aldecour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/rendering.h"

//side_dist (DATA)
//step		(DATA)
//map
//hit
void	dda_algo(t_dda_data data, t_vector delta_dist, t_int_coords map)
{
	//double	perp_wall_dist;
	bool	is_hit;
	int		side;

	is_hit = false;
	while (!is_hit)
	{
		if (data.side_dist.x < data.side_dist.y)
		{
			data.side_dist.x += delta_dist.x;
			map.x += data.step.x;
			side = SIDE_NS;
		}
		else
		{
			data.side_dist.y += delta_dist.y;
			map.y += data.step.y;
			side = SIDE_EW;
		}
		if (!is_hit)		//TODO: check the fcking map dumbass
			is_hit = true;
		printf("wassup\n");
	}
}

t_dda_data	dda_init(t_int_coords map, t_vector delta_dist, t_vector ray_dir, t_vector p_coords)
{
	t_dda_data		data;

	if (ray_dir.x < 0)
	{
		data.step.x = -1;
		data.side_dist.x = (p_coords.x - map.x) * delta_dist.x;
	}
	else
	{
		data.step.x = 1;
		data.side_dist.x = (map.x + 1.0 - p_coords.x) * delta_dist.x;
	}
	if (ray_dir.y < 0)
	{
		data.step.y = -1;
		data.side_dist.y = (p_coords.y - map.y) * delta_dist.y;
	}
	else
	{
		data.step.y = 1;
		data.side_dist.y = (map.y + 1.0 - p_coords.y) * delta_dist.y;
	}
	return (data);
}

//	at delta_dist assignation:
//	simplification from:
//	deltaDist = sqrt(1 + (rayDir * rayDir) / (rayDir * rayDir))
void	dda_start(t_vector *p_coords, t_vector ray_dir)
{
	t_int_coords	map;
	t_vector		delta_dist;
	t_dda_data		data;

	map.x = (int)p_coords->x;
	map.y = (int)p_coords->y;
	if (ray_dir.x == 0 || ray_dir.y == 0)
	{
		ray_dir.x = 1e30;
		ray_dir.y = 1e30;
	}
	delta_dist.x = fabs(1 / ray_dir.x);
	delta_dist.y = fabs(1 / ray_dir.y);
	data = dda_init(map, delta_dist, ray_dir, *p_coords);
	dda_algo(data, delta_dist, map);
}

int	ray_loop(t_vector *p_coords, t_vector *dir, t_vector *plane)
{
	int			x;
	double		camera_x;
	t_vector	ray_dir;

	x = 0;
	(void)p_coords;
	while (x < SWIDTH)
	{
		camera_x = (2 * x / (double)SWIDTH) - 1; 
		ray_dir = vec_add(vec_mult(*plane, camera_x), *dir);
		dda_start(p_coords, ray_dir);
		x++;
	}
	return (1);
}

int	raycasting(t_data *data)
{
	t_vector	*p_coords;
	t_vector	*dir;
	t_vector	*plane;

	p_coords = vec_init(1.5, 0.02);
	dir = vec_init(1, 0);
	plane = vec_init(0, 1);
	if (!p_coords || !dir || !plane)
		return (0);
	ray_loop(p_coords, dir, plane);

	(void)data;		//TMP

	return (1);
}
