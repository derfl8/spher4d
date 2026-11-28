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

#include "libft.h"
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

int	dot_count(char *line, char c)
{
	const char	*tmp;
	int i;

	if (!line)
		return (0);
	tmp = line;
	i = 0;
	while (*tmp)
	{
		if (*tmp == c)
			i++;
		tmp++;
	}
	return (i);
}

int	is_wrong_number(char *numb)
{
	int i;

	if (!numb)
		return (1);
	i = ft_strlen(numb);
	if (i > 3 || i == 0)
		return (1);
	while (i-- > 0)
	{
		if (!ft_isdigit(numb[i]))
			return (1);
	}
	return(0); 
}
