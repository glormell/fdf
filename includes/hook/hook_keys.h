/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_keys.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 20:36:17 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 22:17:35 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_KEYS_H
# define HOOK_KEYS_H
# include "hook/codes/hook_codes.h"
# include "hook/hook_close.h"
# include "hook/hook_arrows.h"
# include "hook/hook_zoom.h"
# include "hook/hook_repair.h"
# include "hook/hook_zrotate.h"
# include "hook/hook_zscale.h"
# include "hook/hook_appearance.h"

int				key_press(int key, void *param);
int				key_release(int key, void *param);

#endif
