/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_audio.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 11:25:58 by glormell          #+#    #+#             */
/*   Updated: 2019/04/07 12:38:56 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/core_audio.h"

void			audio_stop(char *path)
{
	char		*sh;

	if (!path || !ft_strcmp(path, ""))
		return ;
	sh = "kill $(ps | grep 'while :; do afplay audio/";
	sh = ft_strjoin(sh, path);
	sh = ft_strjoin(sh, "' | awk '{ print $1 }')");
	system(sh);
	sh = "kill $(ps | grep \"afplay\" | awk '{ print $1  }')";
	system(sh);
}

void			audio_start(char *path)
{
	char		*sh;

	if (!path || !ft_strcmp(path, ""))
		return ;
	sh = ft_strjoin("while :; do afplay audio/", path);
	sh = ft_strjoin(sh, "; done &");
	system(sh);
}

void			play_audio(char *path)
{
	static char	*last = 0;

	if (last)
		audio_stop(last);
	audio_start(path);
	last = path;
}
