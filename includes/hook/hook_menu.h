/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_menu.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 06:12:05 by glormell          #+#    #+#             */
/*   Updated: 2019/04/08 06:19:22 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_MENU_H
# define HOOK_MENU_H
# include "core/t_fdf.h"
# include "hook/codes/hook_codes.h"

int		is_menu(int key);
int		menu_hook(void *param);

#endif
