/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 18:14:05 by glormell          #+#    #+#             */
/*   Updated: 2019/03/19 20:05:55 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT_H
#define INPUT_H
#include <stdlib.h>
#include "libft.h"
#include "input/get_next_line.h"
#include "map/point.h"
#include "map/map.h"
#define ft_isspace(c)	((c) == ' ' || ((c) >= '\t' && (c) <= '\r'))

t_map           *get_map(const int fd);
#endif
