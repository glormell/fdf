/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 23:02:10 by glormell          #+#    #+#             */
/*   Updated: 2019/03/29 01:55:47 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WINDOW_H
#define WINDOW_H
#include <stdlib.h>
#include "core/mlx_handlers.h"

int		win_init(t_fdf *fdf, int width, int height, char *title);

#endif
