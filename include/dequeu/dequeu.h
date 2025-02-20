/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dequeu.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 23:55:58 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/20 09:13:04 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEQUEU_H
# define DEQUEU_H

# include "types/primitives/i32.h"
# include "types/option/opt_i32.h"
# include "types/primitives/u32.h"
# include "types/primitives/bool.h"



typedef struct s_deq_i32
{
	t_i32		*buffer;
	t_u32		head;
	t_u32		len;
	t_u32		cap;
	void		(*push_back)(struct s_deq_i32 *self, t_i32 value);
	void		(*push_front)(struct s_deq_i32 *self, t_i32 value);
	t_opt_i32	(*pop_back)(struct s_deq_i32 *self);
	t_opt_i32	(*pop_front)(struct s_deq_i32 *self);
	void		(*rotate_back)(struct s_deq_i32 *self);
	void		(*rotate_front)(struct s_deq_i32 *self);
	t_opt_i32	(*get)(struct s_deq_i32 *self, t_u32 index);
	t_opt_i32	(*get_min)(struct s_deq_i32 *self);
	t_opt_i32	(*get_max)(struct s_deq_i32 *self);
	void		(*set)(struct s_deq_i32 *self, t_u32 index, t_i32 value);
	void		(*swap)(struct s_deq_i32 *self, t_u32 i1, t_u32 i2);
	t_bool		(*is_sorted)(struct s_deq_i32 *self);
	t_bool		(*extend)(struct s_deq_i32 *self);
	t_bool		(*shrink)(struct s_deq_i32 *self);
	void		(*destroy)(struct s_deq_i32 *self);
}				t_deq_i32;

t_deq_i32	new_deq_i32();

void		deq_i32_push_back(t_deq_i32 *self, t_i32 value);
void		deq_i32_push_front(t_deq_i32 *self, t_i32 value);
t_opt_i32	deq_i32_pop_back(t_deq_i32 *self);
t_opt_i32	deq_i32_pop_front(t_deq_i32 *self);
void		deq_i32_rotate_back(t_deq_i32 *self);
void		deq_i32_rotate_front(t_deq_i32 *self);
t_opt_i32	deq_i32_get(t_deq_i32 *self, t_u32 index);
t_opt_i32	deq_i32_get_min(t_deq_i32 *self, t_u32 index);
t_opt_i32	deq_i32_get_max(t_deq_i32 *self, t_u32 index);
void		deq_i32_set(t_deq_i32 *self, t_u32 index, t_i32 value);
void		deq_i32_swap(t_deq_i32 *self, t_u32 i1, t_u32 i2);
t_bool		deq_i32_is_sorted(t_deq_i32 *self);
t_bool		deq_i32_extend(t_deq_i32 *self);
t_bool		deq_i32_shrink(t_deq_i32 *self);
void		deq_i32_destroy(t_deq_i32 *self);

#endif