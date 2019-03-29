/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_zoom.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 19:20:05 by glormell          #+#    #+#             */
/*   Updated: 2019/03/29 19:42:49 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_ZOOM_H
#define HOOK_ZOOM_H
#include "hook/codes/hook_codes.h"
#include "hook/hook_translate.h"

int		is_zoom(int key, int shift);
int		zoom_hook(int key, int shift, void *param);

#endif
