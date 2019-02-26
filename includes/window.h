/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 23:02:10 by glormell          #+#    #+#             */
/*   Updated: 2019/02/25 16:45:46 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WINDOW_H
#define WINDOW_H
#include <stdlib.h>
#include <mlx.h>

int     close_hook(void *param);
int     key_hook(int key, void *param);
void    *win_init(void *mlx, int width, int height, char *title);

#endif
