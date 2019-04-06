/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_canvas.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 18:42:02 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 22:53:32 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_CANVAS_H
# define CORE_CANVAS_H
# include "mlx.h"
# include "constants.h"
# include "core/t_fdf.h"

int		canvas_init(t_fdf *fdf);
int		clear_canvas(t_fdf *fdf);

#endif
