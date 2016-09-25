/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varichar <varichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 17:41:45 by varichar          #+#    #+#             */
/*   Updated: 2016/08/07 20:37:45 by varichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	dest_end;
	size_t	i;

	i = 0;
	dest_end = ft_strlen(dest) - 1;
	while (i < n && src[i] != 0)
	{
		dest[dest_end + i] = src[i];
		i++;
	}
	dest[dest_end + i] = 0;
	return (dest);
}
