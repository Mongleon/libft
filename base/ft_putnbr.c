/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varichar <varichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 04:21:25 by varichar          #+#    #+#             */
/*   Updated: 2016/08/07 04:48:05 by varichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putnbr(int n)
{
	if (n < 0 && (n = -n))
		ft_putchar('-');
	if ((n / 10) > 0)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}
