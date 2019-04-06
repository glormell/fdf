/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_fdf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 04:51:28 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 22:50:23 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_FDF_H
# define CORE_FDF_H
# include "mlx.h"
# include "constants.h"
# include "core/t_fdf.h"
# include "core/core_window.h"
# include "core/core_appearance.h"
# include "hook/hook.h"
# include "map/map.h"
# include "input/input_map.h"

t_fdf	*p_fdf(int fd);

#endif
