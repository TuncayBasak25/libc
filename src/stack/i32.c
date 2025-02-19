/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i32.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbasak <sbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:36:34 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/19 20:50:31 by sbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_i32.h"
#include "debug.h"
#include "console.h"
#include "alloc.h"

inline static bool	extend(t_stack_i32 *self)
{
	t_i32	*new_buffer;
	t_u32	new_cap;
	t_u32	i;

	new_cap = self->cap * 2;
	if (new_cap == 0)
		new_cap = 16;
	new_buffer = (t_i32 *)mem_alloc(sizeof(t_i32) * new_cap);
	if (new_buffer == NULL)
	{
		debug("t_stack_i32 -> extend: mem_alloc failed!");
		return (true);
	}
	i = -1;
	while (++i < self->len)
		new_buffer[i] = self->buffer[i];
	mem_free(self->buffer);
	self->buffer = new_buffer;
	self->cap = new_cap;
	return (false);
}

static bool	push(t_stack_i32 *self, t_i32 value)
{
	if (!self)
	{
		debug("t_stack_i32 -> push: Null reference!");
		return (true);
	}
	if (self->len == self->cap && extend(self))
	{
		debug("t_stack_i32 -> push: Extend error!");
		return (true);
	}
	self->buffer[self->len++] = value;
	return (false);
}

static t_i32	pop(t_stack_i32 *self)
{
	if (!self)
	{
		debug("t_stack_i32 -> pop: Null reference!");
		return (0);
	}
	if (self->len == 0)
	{
		debug("t_stack_i32 -> pop: Empty stack!");
		return (0);
	}
	return (self->buffer[--self->len]);
}

static void	destroy(t_stack_i32 *self)
{
	if (!self)
	{
		debug("t_stack_i32 -> destroy: Null reference!");
		return ;
	}
	mem_free(self->buffer);
	mem_free(self);
}

t_stack_i32	*new_stack_i32(void)
{
	t_stack_i32	*self;

	self = mem_alloc(sizeof(t_stack_i32));
	if (self == NULL)
	{
		debug("new_stack_i32: mem_alloc failed!");
		return (NULL);
	}
	self->buffer = 0;
	self->len = 0;
	self->cap = 0;
	self->push = &push;
	self->pop = &pop;
	self->destroy = &destroy;
	return (self);
}
