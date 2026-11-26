/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 19:40:00 by abegou           #+#    #+#             */
/*   Updated: 2026/11/26 19:40:00 by abegou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

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

int	count_lines(char *path)
{
	int		fd;
	int		i;
	char	*line;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (-1);
	i = 0;
	line = get_next_line(fd);
	while (line)
	{
		free(line);
		line = get_next_line(fd);
		i++;
	}
	free(line);
	close(fd);
	return (i);
}

void	fill_lines(t_data *data, char *path, int n)
{
	int		fd;
	int		i;
	char	*pos;

	i = 0;
	fd = open(path, O_RDONLY);
	if (fd == -1)
		err_exit(data, "Open failed");
	while (i < n)
	{
		data->lines[i] = get_next_line(fd);
		pos = ft_strchr(data->lines[i], '\n');
		if (pos)
			*pos = '\0';
		i++;
	}
	free(get_next_line(fd));
	close(fd);
}

void	read_file(t_data *data, char *path)
{
	int	n;

	n = count_lines(path);
	if (n == -1)
		err_exit(data, "Can't open file");
	if (n == 0)
		err_exit(data, "Empty file");
	data->lines = ft_calloc(n + 1, sizeof(char *));
	if (!data->lines)
		err_exit(data, "Malloc failed");
	fill_lines(data, path, n);
}
