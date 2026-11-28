/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 14:16:01 by aldecour          #+#    #+#             */
/*   Updated: 2026/11/28 20:18:09 by aldecour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/spher4d.h"


char	**map_setup()
{
	char	**map;

	map = ft_calloc(MAPHEIGHT, sizeof(char *));
	for (int i = 0; i < MAPHEIGHT; i++)
	{
		map[i] = ft_calloc(MAPWIDTH, sizeof(char));
		for (int j = 0; j < MAPWIDTH; j++)
		{
			if (j == MAPWIDTH - 1 || j == 0)
				map[i][j] = '1';
			else if (i == 0 || i == MAPHEIGHT - 1)
				map[i][j] = '1';
			else
				map[i][j] = '0';
			printf("%c ", map[i][j]);
		}
		printf("\n");
	}
	return (map);
}

int main(void)
{
	mlx_context				mlx = mlx_init();
	mlx_window_create_info	info = {0};
	info.title = "spher4d";
	info.width = SWIDTH;
	info.height = SHEIGHT;
	mlx_window				win = mlx_new_window(mlx, &info);

	mlx_loop(mlx);

	t_data	*data = ft_calloc(1, sizeof(*data));
	data->map.width = MAPWIDTH;
	data->map.height = MAPHEIGHT;
	data->map.map = map_setup();

	raycasting(data);

	mlx_destroy_window(mlx, win);
	mlx_destroy_context(mlx);

	for (int i = 0; i < MAPHEIGHT; i++)
		free(data->map.map[i]);
	free(data->map.map);
	free(data);
	return (0);
}
