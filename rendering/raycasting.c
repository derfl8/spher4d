/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 14:46:08 by aldecour          #+#    #+#             */
/*   Updated: 2026/11/28 20:14:01 by aldecour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/rendering.h"

int	ray_loop(t_vec *p_coords, t_vec *dir, t_vec *plane, t_map map)
{
	int		x;
	double	camera_x;
	double	wall_dist;
	t_vec	ray_dir;
	int		line_height;

	x = 0;
	(void)p_coords;
	while (x < SWIDTH)
	{
		camera_x = (2 * x / (double)SWIDTH) - 1; 
		ray_dir = vec_add(vec_mult(*plane, camera_x), *dir);
		wall_dist = dda_start(p_coords, ray_dir, map);
		line_height = (int)(SHEIGHT / wall_dist);
		printf("line height: %d\n", line_height);
		x++;
	}
	return (1);
}

int	raycasting(t_data *data)
{
	t_vec	*p_coords;
	t_vec	*dir;
	t_vec	*plane;

	p_coords = vec_init(2.0, 2.0);
	dir = vec_init(1, 0);
	plane = vec_init(0, 1);
	if (!p_coords || !dir || !plane)
		return (0);
	ray_loop(p_coords, dir, plane, data->map);

	(void)data;		//TMP

	free(p_coords);
	free(dir);
	free(plane);
	return (1);
}
