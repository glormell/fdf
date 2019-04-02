/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 04:20:02 by glormell          #+#    #+#             */
/*   Updated: 2018/11/28 04:49:16 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	else if (n == 0)
		ft_putchar_fd('0', fd);
	if ((n / 10) && (n < 0))
		ft_putnbr_fd(-(n / 10), fd);
	else if (n / 10)
		ft_putnbr_fd((n / 10), fd);
	if (n)
		ft_putchar_fd((n < 0) ? (-(n % 10) + '0') : ((n % 10) + '0'), fd);
}
