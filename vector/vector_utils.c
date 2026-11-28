/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldecour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 18:58:02 by aldecour          #+#    #+#             */
/*   Updated: 2026/11/28 17:27:56 by aldecour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/vector.h"

char		*vec_to_str(const t_vec *vec)
{
	char	*str;
	(void) vec;

	str = ft_calloc(sizeof (char), 14);
	if (!str)
		return (NULL);
	ft_strlcat(str, "(<", 3);
	ft_strlcat(str + 2, "1.0", 4);	//TODO kms
	ft_strlcat(str + 5, ">,<", 4);
	ft_strlcat(str + 8, "2.0", 4);	//TODO kms
	ft_strlcat(str + 11, ">)", 3);
	str[13] = '\0';
	printf("%s\n", str);	//DEBUG
	return (str);
}
