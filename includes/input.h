/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 18:14:05 by glormell          #+#    #+#             */
/*   Updated: 2019/03/17 17:49:58 by glormell         ###   ########.fr       */
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
    int         *points;
    size_t      width;
    size_t      height;
}               t_map;

t_map           *get_map(const int fd);
#endif
