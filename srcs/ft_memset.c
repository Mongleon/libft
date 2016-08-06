/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varichar <varichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 13:14:44 by varichar          #+#    #+#             */
/*   Updated: 2016/08/06 16:49:03 by varichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int		i;
	void				*pt;

	pt = s;
	i = 0;
	while (i < n)
	{
		((int*)pt)[i] = c;
		i++;
	}
	return (s);
}
