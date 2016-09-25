/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varichar <varichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 17:08:11 by varichar          #+#    #+#             */
/*   Updated: 2016/08/06 17:12:50 by varichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char*)malloc(sizeof(char) * ft_strlen(s));
	while (s[i] != 0)
	{
		dest[i] = s[i];
		i++;
	}
	return (dest);
}
