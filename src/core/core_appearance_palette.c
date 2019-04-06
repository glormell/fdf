/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_appearance_palette.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 21:33:50 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 22:55:53 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/core_appearance_palette.h"

t_appearance	default_appearance(void)
{
	return (appearance(white(), rgba(92, 184, 92, 255),
		rgba(216, 99, 111, 255), "42"));
}

t_appearance	ukrainian_appearance(void)
{
	return (appearance(rgba(0, 87, 184, 255), rgba(0, 87, 184, 255),
		rgba(255, 215, 0, 255), "Ukraine"));
}

t_appearance	russian_appearance(void)
{
	return (appearance(rgba(0, 57, 166, 255), white(),
		rgba(213, 43, 30, 255), "Russia"));
}

t_appearance	french_appearance(void)
{
	return (appearance(white(), rgba(0, 85, 164, 255),
		rgba(239, 65, 53, 255), "France"));
}

t_appearance	chineese_appearance(void)
{
	return (appearance(rgba(222, 41, 16, 255), rgba(222, 41, 16, 255),
		rgba(255, 222, 0, 255), "China"));
}
