/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dda.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/28 18:43:03 by aldecour          #+#    #+#             */
/*   Updated: 2026/11/28 19:05:17 by aldecour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/rendering.h"

//side_dist (DATA)
//step		(DATA)
//map
//hit
double	dda_algo(t_dda_data data, t_vec delta_dist, t_intmap imap, t_map map)
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
			imap.x += data.step.x;
			side = SIDE_NS;
		}
		else
		{
			data.side_dist.y += delta_dist.y;
			imap.y += data.step.y;
			side = SIDE_EW;
		}
		if (map.map[imap.x][imap.y] > '0')
			is_hit = true;
		if (is_hit)
			printf("wall hit at coords %d, %d\n", imap.x, imap.y);
	}
	if (side == SIDE_NS)
		return (data.side_dist.x - delta_dist.x);
	return (data.side_dist.y - delta_dist.y);
}

t_dda_data	dda_init(t_intmap map, t_vec delta, t_vec ray_dir, t_vec p_coords)
{
	t_dda_data		data;

	if (ray_dir.x < 0)
	{
		data.step.x = -1;
		data.side_dist.x = (p_coords.x - map.x) * delta.x;
	}
	else
	{
		data.step.x = 1;
		data.side_dist.x = (map.x + 1.0 - p_coords.x) * delta.x;
	}
	if (ray_dir.y < 0)
	{
		data.step.y = -1;
		data.side_dist.y = (p_coords.y - map.y) * delta.y;
	}
	else
	{
		data.step.y = 1;
		data.side_dist.y = (map.y + 1.0 - p_coords.y) * delta.y;
	}
	return (data);
}

//	at delta_dist assignation:
//	simplification from:
//	deltaDist = sqrt(1 + (rayDir * rayDir) / (rayDir * rayDir))
double	dda_start(t_vec *p_coords, t_vec ray_dir, t_map map)
{
	t_intmap	imap;
	t_vec		delta_dist;
	t_dda_data	data;
	double		wall_dist;

	imap.x = (int)p_coords->x;
	imap.y = (int)p_coords->y;
	if (ray_dir.x == 0 || ray_dir.y == 0)
	{
		ray_dir.x = 1e30;
		ray_dir.y = 1e30;
	}
	delta_dist.x = fabs(1 / ray_dir.x);
	delta_dist.y = fabs(1 / ray_dir.y);
	data = dda_init(imap, delta_dist, ray_dir, *p_coords);
	wall_dist = dda_algo(data, delta_dist, imap, map);
	return (wall_dist);
}
