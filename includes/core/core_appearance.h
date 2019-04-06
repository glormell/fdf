/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_appearance.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 05:42:53 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 22:50:55 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_APPEARANCE_H
# define CORE_APPEARANCE_H
# include "core/t_fdf.h"
# include "core/t_appearance.h"
# include "core/core_appearance_palette.h"
# include "color/color.h"

t_appearance	appearance(t_color base, t_color positive, t_color negative,
	char *name);
int				appearance_init(t_fdf *fdf);

#endif
