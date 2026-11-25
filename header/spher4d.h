/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spher4d.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 08:56:38 by abegou            #+#    #+#             */
/*   Updated: 2026/11/25 22:05:57 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPHER4D_H
# define SPHER4D_H

// libs

# include "../MacroLibX/includes/mlx.h"
# include "../libft/libft.h"
# include <fcntl.h>
# include <limits.h>
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// structs

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

// parsing.c
void			free_tab(char **tab);
void			init_data(t_data *data);
void			err_exit(t_data *data, char *err_msg);
int				check_filename(int ac, char **av);

// pars_file.c
int				count_lines(char *path);
void			fill_lines(t_data *data, char *path, int n);
void			read_file(t_data *data, char *path);

#endif
