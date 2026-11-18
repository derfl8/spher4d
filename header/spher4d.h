/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spher4d.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 08:56:38 by abegou            #+#    #+#             */
/*   Updated: 2026/11/18 19:49:26 by aldecour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPHER4D_H
# define SPHER4D_H

// libs

//# include "../MacroLibX/includes/mlx.h"
# include "../libft/libft.h"
# include <fcntl.h>
# include <limits.h>
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# include "vector.h"

// structs

typedef struct s_texture
{
	char					*no;
	char					*so;
	char					*we;
	char					*ea;
	int						sky;
	int						floor;
}							t_texture;

typedef struct s_map
{
	char					**map;
	int						width;
	int						height;
}							t_map;

typedef struct s_player
{
	t_vector				coords;
	char					spawn_dir;
}							t_player;

typedef struct s_data
{
	t_texture				texture;
	t_map					map;
	t_player				player;
	char					**lines;
}							t_data;

#endif
