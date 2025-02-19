/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_op.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 08:52:05 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/18 10:15:05 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_H
# define MEM_H

# include "type.h"

void	mem_copy(void *dst, const void *src, t_usize n);
void	mem_move(void *dst, const void *src, t_usize n);
void	mem_set(void *mem, t_usize size, t_u8 value);
void	mem_swap(void *a, void *b, t_usize n);
bool	mem_comp(void *a, void *b, t_usize n);

#endif