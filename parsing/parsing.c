/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 08:55:33 by abegou            #+#    #+#             */
/*   Updated: 2026/11/18 13:31:46 by abegou           ###   ########.fr       */
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
	return ;
}

void    init_data(t_data *data)
{
    ft_bzero(data, sizeof(t_data));
    data->texture.floor = -1;
    data->texture.sky = -1;
}

void    err_exit(t_data *data, char *err_msg)
{
    free(data->texture.ea);
    free(data->texture.we);
    free(data->texture.so);
    free(data->texture.no);
    free_tab(data->map.map);
    free_tab(data->lines);
    write(1, "Error\n", 6);
    write(2, err_msg, ft_strlen(err_msg));
    exit(1);
}

int    check_filename(int ac, char **av)
{
    if (ac != 2)
        return (1);
    if (ft_strncmp(av[1] + ft_strlen(av[1]) - 4, ".cub", 4))
        return (1);
}

int main(int ac, char **av)
{
    t_data data;
    (void)ac;
    (void)av;

    init_data(&data);
    err_exit(&data, "TEST\n");
    return (0);
}