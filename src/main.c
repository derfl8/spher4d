/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 19:40:00 by abegou           #+#    #+#             */
/*   Updated: 2026/11/26 19:40:00 by abegou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

void	init_data(t_data *data)
{
	ft_bzero(data, sizeof(t_data));
	data->texture.floor = -1;
	data->texture.sky = -1;
}

int	main(int ac, char **av)
{
	t_data	data;
	int		i;

	i = 0;
	init_data(&data);
	if (check_filename(ac, av))
		err_exit(&data, "File doesn't exist");
	read_file(&data, av[1]);
	while (data.lines[i])
	{
		printf("%s\n", data.lines[i]);
		i++;
	}
	free_tab(data.lines);
	return (0);
}
