/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   texture.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 18:04:29 by abegou            #+#    #+#             */
/*   Updated: 2026/11/26 18:46:34 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/spher4d.h"

int    is_empty_line(char  *line)
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