/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deq_i32_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 00:25:04 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/19 13:51:21 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type.h"
#include "deq_i32.h"
#include "debug.h"

t_i32		deq_i32_get(t_deq_i32 *deq, t_u16 i)
{
	if (!deq)
	{
		debug("deq_i32_get: Null reference!");
		return (0);
	}
	if (i >= deq->len)
	{
		debug("deq_i32_get: i >= len !");
		return (0);
	}
	return (deq->buffer[(deq->head + i) & (deq->cap - 1)]);
}

bool		deq_i32_set(t_deq_i32 *deq, t_u16 i, t_i32 value)
{
	if (!deq)
	{
		debug("deq_i32_set: Null reference!");
		return (true);
	}
	if (i >= deq->len)
	{
		debug("deq_i32_get: i >= len !");
		return (true);
	}
	if (!deq || i >= deq->len)
		return (true);
	deq->buffer[(deq->head + i) & (deq->cap - 1)] = value;
	return (false);
}

bool		deq_i32_swap(t_deq_i32 *deq, t_u16 i1, t_u16 i2)
{
	t_i32	temp;

	if (!deq)
	{
		debug("deq_i32_swap: Null reference!");
		return (true);
	}
	if (i1 >= deq->len || i2 >= deq->len)
	{
		debug("deq_i32_get: i1 >= len || i2 >= len !");
		return (true);
	}
	temp = deq->buffer[(deq->head + i1)];
	deq->buffer[(deq->head + i1) & (deq->cap - 1)] = deq->buffer[(deq->head + i2) & (deq->cap - 1)];
	deq->buffer[(deq->head + i2) & (deq->cap - 1)] = temp;
	return (false);
}

bool		deq_i32_is_inc_sorted(t_deq_i32 *deq)
{
	t_u16	i;

	if (!deq)
	{
		debug("deq_i32_is_inc_sorted: Null reference!");
		return (false);
	}
	i = 0;
	while (++i < deq->len)
		if (deq->buffer[(deq->head + i - 1) & (deq->cap - 1)] > deq->buffer[(deq->head + i) & (deq->cap - 1)])
			return (false);
	return (true);
}

t_i32		deq_i32_get_max(t_deq_i32 *deq)
{
	t_i32	max;
	t_i32	actual;
	t_u16	i;

	if (!deq)
	{
		debug("deq_i32_get_max: Null reference!");
		return (0);
	}
	if (deq->len == 0)
	{
		debug("deq_i32_get_max: len == 0 !");
		return (0);
	}
	max = deq_i32_get(deq, 0);
	i = 0;
	while (++i < deq->len)
	{
		actual = deq_i32_get(deq, i);
		if (actual > max)
			max = actual;
	}
	return (max);
}