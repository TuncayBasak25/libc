/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deq_i32.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 13:32:47 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/19 13:51:04 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEQ_I32_H
# define DEQ_I32_H

# include "type.h"

typedef struct s_deq_i32
{
	t_u16	head;
	t_u16	len;
	t_u16	cap;
	t_i32	*buffer;
}			t_deq_i32;

t_deq_i32	*deq_i32_create();

bool		deq_i32_push_back(t_deq_i32 *deq, t_i32 num);
bool		deq_i32_push_front(t_deq_i32 *deq, t_i32 num);

t_i32		deq_i32_pop_back(t_deq_i32 *deq);
t_i32		deq_i32_pop_front(t_deq_i32 *deq);

void		deq_i32_rotate_back(t_deq_i32 *deq);
void		deq_i32_rotate_front(t_deq_i32 *deq);

t_i32		deq_i32_get(t_deq_i32 *deq, t_u16 i);
bool		deq_i32_set(t_deq_i32 *deq, t_u16 i, t_i32 value);

bool		deq_i32_swap(t_deq_i32 *deq, t_u16 i1, t_u16 i2);

bool		deq_i32_is_inc_sorted(t_deq_i32 *deq);
t_i32		deq_i32_get_max(t_deq_i32 *deq);

#endif