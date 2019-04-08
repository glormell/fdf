/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_repair.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 02:02:28 by glormell          #+#    #+#             */
/*   Updated: 2019/04/08 04:27:35 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_REPAIR_H
# define HOOK_REPAIR_H
# include "core/t_fdf.h"
# include "core/core_canvas.h"
# include "hook/codes/hook_codes.h"

int			is_repair(int key);
int			repair_hook(void *param);

#endif
