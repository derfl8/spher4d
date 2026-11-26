/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 17:29:58 by abegou            #+#    #+#             */
/*   Updated: 2026/11/26 17:30:12 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/spher4d.h"

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
