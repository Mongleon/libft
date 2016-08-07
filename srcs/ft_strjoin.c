/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varichar <varichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 03:38:44 by varichar          #+#    #+#             */
/*   Updated: 2016/08/07 03:41:55 by varichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *dest;

	dest = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	ft_strcpy(dest, s1);
	ft_strcat(dest, s2);
	return (dest);
}
