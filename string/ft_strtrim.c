/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varichar <varichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 03:49:09 by varichar          #+#    #+#             */
/*   Updated: 2016/08/07 03:59:02 by varichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s)
{
	char	*dest;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			j++;
		i++;
	}
	dest = ft_strnew(j);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			dest[j++] = s[i];
		i++;
	}
	return (dest);
}
