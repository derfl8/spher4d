/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:18:44 by abegou            #+#    #+#             */
/*   Updated: 2026/11/20 12:07:14 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	int		j;
	int		i;
	int		k;

	i = ft_strlen(s1);
	k = ft_strlen(s2);
	if (!s1 && !s2)
		return (NULL);
	ret = ft_calloc(sizeof(char), i + k + 1);
	if (!ret)
		return (NULL);
	j = -1;
	while (++j < i)
		ret[j] = s1[j];
	ret[j] = '\0';
	j = -1;
	while (s2[++j])
		ret[i + j] = s2[j];
	ret[i + j] = '\0';
	return (ret);
}
