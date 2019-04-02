/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 04:06:12 by glormell          #+#    #+#             */
/*   Updated: 2018/11/28 04:45:36 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < 0)
		ft_putchar('-');
	else if (n == 0)
		ft_putchar('0');
	if ((n / 10) && (n < 0))
		ft_putnbr(-(n / 10));
	else if (n / 10)
		ft_putnbr(n / 10);
	if (n)
		ft_putchar((n < 0) ? (-(n % 10) + '0') : ((n % 10) + '0'));
}