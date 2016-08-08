/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varichar <varichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 02:12:13 by varichar          #+#    #+#             */
/*   Updated: 2016/08/07 02:18:04 by varichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dest;
	size_t	i;

	dest = (char*)malloc(sizeof(char) * ft_strlen(s));
	i = 0;
	while (s[i])
	{
		dest[i] = f(s[i]);
		i++;
	}
	return (dest);
}
