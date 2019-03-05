/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 18:14:05 by glormell          #+#    #+#             */
/*   Updated: 2019/03/03 20:13:52 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_H
#define INPUT_H
#include <stdlib.h>
#include "libft.h"
#include "get_next_line.h"
#include "point.h"
#define ft_isspace(c)	((c) == ' ' || ((c) >= '\t' && (c) <= '\r'))

typedef struct  s_map
{
    t_point3     **points;
    size_t      len;
}               t_map;

t_map           *get_map(const int fd);
#endif
