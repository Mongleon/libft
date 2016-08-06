/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varichar <varichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 14:54:56 by varichar          #+#    #+#             */
/*   Updated: 2016/08/06 16:48:15 by varichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (((char*)src)[i] == c)
			return ((void*)&((char*)dest)[i]);
		((char*)dest)[i] = ((char*)src)[i];
		i++;
	}
	return (NULL);
}
