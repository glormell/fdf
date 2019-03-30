/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_color.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 05:31:04 by glormell          #+#    #+#             */
/*   Updated: 2019/03/30 19:26:53 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_COLOR_H
#define T_COLOR_H

typedef struct	s_color
{
	unsigned char	r;
	unsigned char	g;
	unsigned char	b;
	int				raw;
}				t_color;

#endif