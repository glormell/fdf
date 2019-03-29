/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_arrows.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 18:47:23 by glormell          #+#    #+#             */
/*   Updated: 2019/03/29 19:13:43 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_ARROWS_H
#define HOOK_ARROWS_H
#include "hook/codes/hook_codes.h"
#include "hook/hook_translate.h"
#include "hook/hook_rotate.h"

int		is_arrow(int key);
int		arrow_hook(int key, int shift, void *param);

#endif
