/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_audio.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 11:57:29 by glormell          #+#    #+#             */
/*   Updated: 2019/04/07 12:02:51 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_AUDIO_H
# define HOOK_AUDIO_H
# include "core/t_fdf.h"
# include "core/core_audio.h"
# include "hook/codes/hook_codes.h"

int		is_audio(int key);
void	audio_hook(int key, void *param);

#endif
