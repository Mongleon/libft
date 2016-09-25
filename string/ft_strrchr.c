/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varichar <varichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 18:18:16 by varichar          #+#    #+#             */
/*   Updated: 2016/09/25 21:26:18 by varichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_end;

	s_end = ft_strlen(s);
	while (s_end > 0)
	{
		if (s[s_end] == c)
			return (&((char*)s)[s_end - 1]);
		s_end--;
	}
	return (NULL);
}
