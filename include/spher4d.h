/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spher4d.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 19:40:00 by abegou           #+#    #+#             */
/*   Updated: 2026/11/26 19:40:00 by abegou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPHER4D_H
# define SPHER4D_H

# include "libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_texture
{
	char		*no;
	char		*so;
	char		*we;
	char		*ea;
	int			sky;
	int			floor;
}				t_texture;

typedef struct s_map
{
	char		**map;
	int			width;
	int			height;
}				t_map;

typedef struct s_vector
{
	double		x;
	double		y;
}				t_vector;

typedef struct s_player
{
	t_vector	coords;
	char		spawn_dir;
}				t_player;

typedef struct s_data
{
	t_texture	texture;
	t_map		map;
	t_player	player;
	char		**lines;
}				t_data;

// main.c
void	init_data(t_data *data);

// utils.c
void	free_tab(char **tab);
void	err_exit(t_data *data, char *err_msg);
int		is_empty_line(char *line);

#endif
