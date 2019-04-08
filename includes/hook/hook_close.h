/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_close.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 05:01:21 by glormell          #+#    #+#             */
/*   Updated: 2019/04/08 04:18:14 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_CLOSE_H
# define HOOK_CLOSE_H
# include <stdlib.h>
# include "mlx.h"
# include "core/t_fdf.h"
# include "core/core_audio.h"
# include "hook/codes/hook_codes.h"

int		is_close(int key);
int		close_hook(void *param);

#endif
