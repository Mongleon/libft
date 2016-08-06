/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varichar <varichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 18:38:20 by varichar          #+#    #+#             */
/*   Updated: 2016/08/06 18:42:33 by varichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (big[i] != little[0] && big[i] && i < len)
		i++;
	while (big[i + j] == little[j] && little[j] && i + j < len)
		j++;
	if (little[j] == 0)
		return (&((char*)big)[i]);
	return (NULL);
}
