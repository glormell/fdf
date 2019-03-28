/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 20:47:44 by glormell          #+#    #+#             */
/*   Updated: 2019/03/28 23:27:26 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRANSLATE_H
#define TRANSLATE_H
#include <stdlib.h>
#include "core/t_fdf.h"
#include "draw/rgba.h"

int		translate(int x, int y, void *param);
int		left_hook();
int		right_hook();
int		top_hook();
int		bottom_hook();

#endif
