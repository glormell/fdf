/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_audio.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 11:27:45 by glormell          #+#    #+#             */
/*   Updated: 2019/04/07 11:55:14 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_AUDIO_H
# define CORE_AUDIO_H
# include "libft.h"

void	audio_stop(char *path);
void	audio_start(char *path);
void	play_audio(char *path);

#endif
