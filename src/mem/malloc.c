/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 10:43:33 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/19 13:05:39 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "type.h"
#include "mem_op.h"
#include "alloc/registery.h"
#include "debug.h"

static t_alloc_r	*get_alloc_registery()
{
	static t_alloc_r	registery = {0};

	return (&registery);
}

static bool	resize()
{
	t_alloc_r	*registery;
	t_ptr		*new_ptrs;

	registery = get_alloc_registery();
	if (registery->cap == 0)
		registery->cap = 4;
	else if (registery->len == registery->cap)
		registery->cap *= 2;
	else if (registery->len < (registery->cap >> 3))
		registery->cap /= 2;
	else
		return (false);
	new_ptrs = (t_ptr *)malloc(sizeof(t_ptr) * registery->cap);
	if (new_ptrs == NULL)
	{
		debug("Alloc registery resize error! Malloc returned NULL!");
		return (true);
	}
	mem_copy(new_ptrs, registery->ptrs, registery->len * sizeof(t_ptr));
	free(registery->ptrs);
	registery->ptrs = new_ptrs;
	return (false);
}

void	*mem_alloc(t_usize size)
{
	t_alloc_r	*registery;
	void		*ptr;

	if (size == 0 || resize())
		return (NULL);
	ptr = malloc(size);
	if (ptr == NULL)
	{
		debug("Function mem_alloc: malloc failed!");
		return (NULL);
	}
	registery = get_alloc_registery();
	registery->ptrs[registery->len++] = ptr;
	return (ptr);
}

bool	mem_free(t_ptr ptr)
{
	t_alloc_r	*registery;
	t_usize		i;

	if (ptr == NULL)
		return (true);
	registery = get_alloc_registery();
	i = 0;
	while (i < registery->len)
	{
		if (registery->ptrs[i] == ptr)
			break ;
		i++;
	}
	if (i == registery->len)
	{
		debug("mem_free: pointer not found in registery!");
		return (true);
	}
	registery->ptrs[i] = registery->ptrs[--registery->len];
	free(ptr);
	if (registery->len == 0)
	{
		free(registery->ptrs);
		*registery = (t_alloc_r){0};
	}
	return (false);
}

__attribute__((destructor))
void	mem_free_all()
{
	t_alloc_r	*registery;
	t_usize		i;

	registery = get_alloc_registery();
	i = 0;
	while (i < registery->len)
		free(registery->ptrs[i++]);
	free(registery->ptrs);
	*registery = (t_alloc_r){0};
}
