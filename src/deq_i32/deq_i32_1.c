/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deq_i32_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 00:25:04 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/19 13:50:34 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type.h"
#include "deq_i32.h"
#include "debug.h"

t_i32		deq_i32_pop_back(t_deq_i32 *deq)
{
	if (!deq)
	{
		debug("deq_i32_pop_back: Null reference!");
		return (0);
	}
	if (deq->len == 0)
	{
		debug("deq_i32_pop_back: len == 0 !");
		return (0);
	}
	deq->len--;
	return (deq->buffer[(deq->head + deq->len) & (deq->cap - 1)]);
}

t_i32		deq_i32_pop_front(t_deq_i32 *deq)
{
	t_u16	head;

	if (!deq)
	{
		debug("deq_i32_pop_front: Null reference!");
		return (0);
	}
	if (deq->len == 0)
	{
		debug("deq_i32_pop_front: len == 0 !");
		return (0);
	}
	deq->len--;
	head = deq->head;
	deq->head++;
	if (deq->head == deq->cap)
		deq->head = 0;
	return (deq->buffer[head & (deq->cap - 1)]);
}

void		deq_i32_rotate_back(t_deq_i32 *deq)
{
	if (!deq)
	{
		debug("deq_i32_rotate_back: Null reference!");
		return ;
	}
	if (deq->len < 2)
		return ;
	if (deq->head == 0)
		deq->head = deq->cap - 1;
	else
		deq->head--;
	if (deq->len < deq->cap)
		deq->buffer[deq->head & (deq->cap - 1)] = deq->buffer[(deq->head + deq->len) & (deq->cap - 1)];
}

void		deq_i32_rotate_front(t_deq_i32 *deq)
{
	if (!deq)
	{
		debug("deq_i32_rotate_front: Null reference!");
		return ;
	}
	if (deq->len < 2)
		return ;
	if (deq->len < deq->cap)
		deq->buffer[(deq->head + deq->len) & (deq->cap - 1)] = deq->buffer[deq->head & (deq->cap - 1)];
	deq->head++;
	if (deq->head == deq->cap)
		deq->head = 0;
}
