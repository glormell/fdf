/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_error.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 23:19:23 by glormell          #+#    #+#             */
/*   Updated: 2019/04/06 22:50:29 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_ERROR_H
# define CORE_ERROR_H
# include <errno.h>
# include <stdlib.h>
# include <stdio.h>

void	xerror(int code, char *str);

#endif
