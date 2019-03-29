/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 04:44:32 by glormell          #+#    #+#             */
/*   Updated: 2019/03/29 05:02:14 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_H
#define HOOK_H
#include <mlx.h>
#include "core/t_fdf.h"
#include "hook/codes/hook_codes.h"
#include "hook/hook_close.h"
#include "hook/hook_translate.h"
#include "hook/hook_rotate.h"

int		hook_init(t_fdf *fdf);

#endif
