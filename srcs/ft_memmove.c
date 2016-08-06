/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varichar <varichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 15:15:26 by varichar          #+#    #+#             */
/*   Updated: 2016/08/06 16:48:47 by varichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	void			*tmp;

	i = 0;
	tmp = (void*)malloc(n);
	while (i < n)
	{
		((char*)tmp)[i] = ((char*)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((char*)dest)[i] = ((char*)tmp)[i];
		i++;
	}
	free(tmp);
	return (dest);
}
