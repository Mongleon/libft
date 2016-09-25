/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varichar <varichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 20:46:43 by varichar          #+#    #+#             */
/*   Updated: 2016/08/07 22:01:54 by varichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbwords(char const *s, char c)
{
	size_t	nbwords;
	size_t	i;
	int		f;

	nbwords = 0;
	i = 0;
	f = 0;
	while (s[i])
	{
		if (s[i] != c && f == 0)
		{
			f = 1;
			nbwords++;
		}
		if (s[i] == c && f == 1)
			f = 0;
		i++;
	}
	return (nbwords);
}

char *ft_getword(char const *s, char c, size_t i)
{
	size_t	j;
	char	*word;

	j = 0;
	while (s[i] == c)
		i++;
	while (s[i + j] != c)
		j++;
	word = (char*)malloc(sizeof(char) * (j + 1));
	j = 0;
	while (s[i + j] != c)
	{
		word[j] = s[i + j];
		j++;
	}
	word[j] = 0;
	return (word);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**splitw;
	size_t	i;
	size_t	size;
	size_t	index;

	i = 0;
	index = 0;
	size = ft_nbwords(s, c);
	splitw = (char**)malloc(sizeof(char*) * size);
	while (index < size)
	{
		while (s[i] == c)
			i++;
		splitw[index] = ft_getword(s, c, i);
		index++;
		while (s[i] != c)
			i++;
	}
	return (splitw);
}
