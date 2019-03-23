/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 20:47:44 by glormell          #+#    #+#             */
/*   Updated: 2019/03/23 22:45:32 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRANSLATE_H
#define TRANSLATE_H
#include <stdlib.h>
#include "core/t_fdf.h"
#include "draw/rgba.h"

int		translate(int x, int y, void *param);
int		left_hook(void *param);
int		right_hook(void *param);
int		top_hook(void *param);
int		bottom_hook(void *param);

#endif
