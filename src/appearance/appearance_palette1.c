/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   appearance_palette1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 13:59:40 by glormell          #+#    #+#             */
/*   Updated: 2019/04/07 13:59:41 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "appearance/appearance_palette1.h"

t_appearance	default_appearance(void)
{
	return ((t_appearance){white(), rgba(92, 184, 92, 255),
		rgba(216, 99, 111, 255), black(), "=", "+", "-", ""});
}

t_appearance	ukrainian_appearance(void)
{
	return ((t_appearance){rgba(0, 87, 184, 255), rgba(0, 87, 184, 255),
		rgba(255, 215, 0, 255), black(),
		"YKPAiHA", "ZE", "TBOE", "Ukraine.mp3"});
}

t_appearance	russian_appearance(void)
{
	return ((t_appearance){rgba(0, 57, 166, 255), white(),
		rgba(213, 43, 30, 255), black(), "You", "Are", "Here", "Russia.mp3"});
}

t_appearance	french_appearance(void)
{
	return ((t_appearance){white(), rgba(0, 85, 164, 255),
		rgba(239, 65, 53, 255), black(),
		"Pardon", "My", "French", "France.mp3"});
}

t_appearance	chineese_appearance(void)
{
	return ((t_appearance){rgba(222, 41, 16, 255), rgba(222, 41, 16, 255),
		rgba(255, 222, 0, 255), black(),
		"Xiang...", "Xia...", "Xiaomi!", "China.mp3"});
}
