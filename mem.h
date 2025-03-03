/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:27:15 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/03 10:37:23 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_H
# define MEM_H

# include "core.h"

void	mem_copy_unsafe(void *dst, const void *src, t_usize n);
void	mem_move_unsafe(void *dst, const void *src, t_usize n);
void	mem_swap_unsafe(void *a, void *b, t_usize n);

#endif