/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 19:40:00 by abegou           #+#    #+#             */
/*   Updated: 2026/11/26 19:40:00 by abegou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_H
# define PARSING_H

# include "spher4d.h"
# include <fcntl.h>

// parsing/read_file.c
int		check_filename(int ac, char **av);
int		count_lines(char *path);
void	fill_lines(t_data *data, char *path, int n);
void	read_file(t_data *data, char *path);

#endif
