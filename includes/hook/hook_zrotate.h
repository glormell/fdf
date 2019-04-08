/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_zrotate.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 02:34:09 by glormell          #+#    #+#             */
/*   Updated: 2019/04/08 04:13:55 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_ZROTATE_H
# define HOOK_ZROTATE_H
# include "hook/codes/hook_codes.h"
# include "hook/hook_rotate.h"

int		is_zrotate(int key, int shift);
int		zrotate_hook(int key, void *param);

#endif
