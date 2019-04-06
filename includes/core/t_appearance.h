/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_appearance.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 05:37:14 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 22:49:38 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_APPEARANCE_H
# define T_APPEARANCE_H
# include "color/t_color.h"

typedef struct	s_appearance
{
	t_color		base;
	t_color		positive;
	t_color		negative;
	char		*name;
}				t_appearance;

#endif
