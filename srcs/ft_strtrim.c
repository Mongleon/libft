/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varichar <varichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 03:49:09 by varichar          #+#    #+#             */
/*   Updated: 2016/11/04 12:21:59 by varichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	*size_new_str(char const *s)
{
	size_t i;
	size_t *val;

	i = 0;
	val = (size_t*)malloc(sizeof(size_t) * 3);
	val[0] = ft_strlen(s);
	val[1] = 0;
	val[2] = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		val[1]++;
		i++;
	}
	i = 1;
	while (s[val[0] - i] == ' ' || s[val[0] - i] == '\n' ||\
				s[val[0] - i] == '\t')
	{
		val[2]++;
		i++;
	}
	val[2] = (val[0] == val[1]) ? 0 : val[2];
	return (val);
}

char			*ft_strtrim(char const *s)
{
	char	*dest;
	size_t	*val;
	size_t	i;

	i = 0;
	val = size_new_str(s);
	if ((dest = ft_strnew(val[0] - val[1] - val[2] + 1)))
	{
		i = val[1];
		while (i < val[0] - val[2])
		{
			dest[i - val[1]] = s[i];
			i++;
		}
		dest[i - val[1]] = 0;
		free(val);
		return (dest);
	}
	return (NULL);
}
