/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 19:40:00 by abegou           #+#    #+#             */
/*   Updated: 2026/11/26 19:40:00 by abegou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "spher4d.h"

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

int	is_empty_line(char *line)
{
	const char	*tmp;

	if (!line)
		return (0);
	tmp = line;
	while (*tmp)
	{
		if (*tmp != ' ')
			return (0);
		tmp++;
	}
	return (1);
}
