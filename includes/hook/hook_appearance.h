/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_appearance.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 21:16:52 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 22:18:11 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_APPEARANCE_H
# define HOOK_APPEARANCE_H
# include "core/t_fdf.h"
# include "core/core_appearance_palette.h"
# include "hook/codes/hook_codes.h"

int		is_appearance(int k);
void	appearance_hook(void *param, int key);

#endif
