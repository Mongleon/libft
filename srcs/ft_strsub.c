/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varichar <varichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 03:19:43 by varichar          #+#    #+#             */
/*   Updated: 2016/11/04 10:37:10 by varichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	if ((dest = ft_strnew((len + 1))))
	{
		i = 0;
		while (i < len)
		{
			dest[i] = s[start + i];
			i++;
		}
		dest[i] = 0;
		return (dest);
	}
	return (NULL);
}
