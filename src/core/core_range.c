/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_range.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 03:37:43 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 23:02:58 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/core_range.h"

t_range			*p_range(int min, int max)
{
	t_range		*range;

	if (!(range = (t_range *)ft_memalloc(sizeof(t_range))))
		return (0);
	range->min = min;
	range->max = max;
	return (range);
}

t_range			range(int min, int max)
{
	return ((t_range){ min, max });
}
