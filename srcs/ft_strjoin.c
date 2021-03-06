/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varichar <varichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 03:38:44 by varichar          #+#    #+#             */
/*   Updated: 2016/11/05 15:47:50 by varichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*dest;
	unsigned int	size;

	size = (s1) ? ft_strlen(s1) : 0;
	size = (s2) ? ft_strlen(s2) : 0;
	if (s1 && s2)
		size = ft_strlen(s1) + ft_strlen(s2);
	if ((dest = ft_strnew(size)))
	{
		if (s1)
			ft_strcpy(dest, s1);
		if (s1 && s2)
			ft_strcat(dest, s2);
		else if (s2)
			ft_strcpy(dest, s2);
		if (!s1 && !s2)
			dest = NULL;
	}
	return (dest);
}
