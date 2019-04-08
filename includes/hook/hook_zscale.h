/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_zscale.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 21:01:26 by glormell          #+#    #+#             */
/*   Updated: 2019/04/08 04:34:07 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_ZSCALE_H
# define HOOK_ZSCALE_H
# include "core/t_fdf.h"
# include "hook/codes/hook_codes.h"

int			is_zscale(int key);
int			zscale_hook(void *param, int key, int shift);

#endif
