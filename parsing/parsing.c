/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 08:55:33 by abegou            #+#    #+#             */
/*   Updated: 2026/11/26 17:29:49 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/spher4d.h"

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	if (!tab)
		return ;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}

void	init_data(t_data *data)
{
	ft_bzero(data, sizeof(t_data));
	data->texture.floor = -1;
	data->texture.sky = -1;
}

void	err_exit(t_data *data, char *err_msg)
{
	free(data->texture.ea);
	free(data->texture.we);
	free(data->texture.so);
	free(data->texture.no);
	free_tab(data->map.map);
	free_tab(data->lines);
	write(2, "Error\n", 6);
	write(2, err_msg, ft_strlen(err_msg));
	write(2, "\n", 1);
	exit(1);
}

int	check_filename(int ac, char **av)
{
	if (ac != 2)
		return (1);
	if (ft_strlen(av[1]) <= 4)
		return (1);
	if (ft_strncmp(av[1] + ft_strlen(av[1]) - 4, ".cub", 4))
		return (1);
	return (0);
}
