/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deq_i32_0.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 00:25:04 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/19 13:23:26 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type.h"
#include "alloc.h"
#include "deq_i32.h"
#include "debug.h"

t_deq_i32	*deq_i32_create()
{
	t_deq_i32	*deq;

	deq = (t_deq_i32 *)mem_alloc(sizeof(t_deq_i32));
	if (deq == NULL)
	{
		debug("deq_i32_create: mem_alloc returned NULL!");
		return (NULL);
	}
	*deq = (t_deq_i32){0};
	return (deq);
}

static bool	extend(t_deq_i32 *deq)
{
	t_i32	*new_buffer;
	t_u16	new_cap;
	t_usize	i;

	if (deq->len < deq->cap)
		return (false);
	new_cap = deq->cap * 2;
	if (new_cap == 0)
		new_cap = 16;
	new_buffer = (t_i32 *)mem_alloc(sizeof(t_i32) * new_cap);
	if (new_buffer == NULL)
	{
		debug("deq_i32 extend error: mem_alloc returned NULL!");
		return (true);
	}
	i = -1;
	while (++i < deq->len)
		new_buffer[i] = deq->buffer[(deq->head + i) & (deq->cap - 1)];
	mem_free(deq->buffer);
	deq->buffer = new_buffer;
	deq->cap = new_cap;
	deq->head = 0;
	return (false);
}

bool		deq_i32_push_back(t_deq_i32 *deq, t_i32 num)
{
	if (!deq || extend(deq))
	{
		debug("deq_i32_push_back: Null reference or extend error!");
		return (true);
	}
	deq->buffer[(deq->head + deq->len) & (deq->cap - 1)] = num;
	deq->len++;
	return (false);
}

bool		deq_i32_push_front(t_deq_i32 *deq, t_i32 num)
{
	if (!deq || extend(deq))
	{
		debug("deq_i32_push_front: Null reference or extend error!");
		return (true);
	}
	if (deq->head == 0)
		deq->head = deq->cap - 1;
	else
		deq->head--;
	deq->len++;
	deq->buffer[deq->head & (deq->cap - 1)] = num;
	return (false);
}
