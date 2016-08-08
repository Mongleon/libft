/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varichar <varichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 02:12:13 by varichar          #+#    #+#             */
/*   Updated: 2016/08/08 22:11:45 by varichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dest;
	size_t	i;

	dest = ft_strnew(ft_strlen(s));
	i = 0;
	while (s[i])
	{
		dest[i] = f(s[i]);
		i++;
	}
	return (dest);
}
