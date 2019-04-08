/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_text.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 06:26:17 by glormell          #+#    #+#             */
/*   Updated: 2019/04/08 06:28:58 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_TEXT_H
# define DRAW_TEXT_H
# include "mlx.h"
# include "constants.h"
# include "core/t_fdf.h"

void				put_info(t_fdf *fdf);
void				put_menu(t_fdf *fdf);

#endif
