/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_window.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 04:50:45 by glormell          #+#    #+#             */
/*   Updated: 2019/03/29 05:21:50 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_WINDOW_H
#define CORE_WINDOW_H
#include <mlx.h>
#include "core/t_fdf.h"

int		win_init(t_fdf *fdf, int width, int height, char *title);

#endif
