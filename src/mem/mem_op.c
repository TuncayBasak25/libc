/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_op.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 08:57:43 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/19 13:11:17 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type.h"
#include "debug.h"

void	mem_copy(void *dst, const void *src, t_usize n)
{
	if (!n)
		return ;
	if (!dst || !src)
	{
		debug("mem_copy: Null reference!");
		return ;
	}
	while (n--)
		*(t_u8 *)dst++ = *(t_u8 *)src++;
}

void	mem_move(void *dst, const void *src, t_usize n)
{
	if (!n)
		return ;
	if (!dst || !src)
	{
		debug("mem_move: Null reference!");
		return ;
	}
	if (dst < src)
		return (mem_copy(dst, src, n));
	while (n--)
		((t_u8 *)dst)[n] = ((t_u8 *)src)[n];

}

void	mem_set(void *ptr, t_usize size, t_u8 value)
{
	if (size == 0)
		return ;
	if (!ptr)
	{
		debug("mem_set: Null reference!");
		return ;
	}
	while (size-- > 0)
		*(t_u8 *)ptr++ = value;
}

void	mem_swap(void *a, void *b, t_usize n)
{
	t_u8	temp;

	if (!n)
		return ;
	if (!a || !b)
	{
		debug("mem_swap: Null reference!");
		return ;
	}
	while (n-- > 0)
	{
		temp = *(t_u8 *)a;
		*(t_u8 *)a++ = *(t_u8 *)b;
		*(t_u8 *)b++ = temp;
	}
}

bool	mem_comp(void *a, void *b, t_usize n)
{
	if (!n)
		return (true);
	if (!a || !b)
	{
		debug("mem_comp: Null reference!");
		return (false);
	}
	while (n-- > 0)
		if (*(t_u8 *)a++ != *(t_u8 *)b++)
			return (false);
	return (true);
}