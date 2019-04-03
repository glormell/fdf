/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_range.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 03:37:25 by glormell          #+#    #+#             */
/*   Updated: 2019/04/03 05:54:21 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_RANGE_H
#define CORE_RANGE_H
#include "libft.h"

typedef struct	s_range
{
	int			min;
	int			max;
}				t_range;

t_range			*p_range(int min, int max);
t_range			range(int min, int max);

#endif
