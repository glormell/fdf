/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 04:44:32 by glormell          #+#    #+#             */
/*   Updated: 2019/04/03 04:27:06 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_H
#define HOOK_H
#include "mlx.h"
#include "core/t_fdf.h"
#include "hook/hook_keys.h"
#include "hook/hook_mouse.h"

int		hook_init(t_fdf *fdf);

#endif
