/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:29:54 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/03 10:38:20 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"

void	mem_copy_unsafe(void *dst, const void *src, t_usize n)
{
	t_u8	*dst_u8;
	t_u8	*src_u8;

	dst_u8 = (t_u8 *)dst;
	src_u8 = (t_u8 *)src;
	while (n--)
		*dst_u8++ = *src_u8++;
}

void	mem_move_unsafe(void *dst, const void *src, t_usize n)
{
	t_u8	*dst_u8;
	t_u8	*src_u8;

	if (dst < src)
		return (mem_copy_unsafe(dst, src, n));
	dst_u8 = (t_u8 *)dst;
	src_u8 = (t_u8 *)src;
	while (n--)
		dst_u8[n] = src_u8[n];
}

void	mem_swap_unsafe(void *a, void *b, t_usize n)
{
	t_u8	*a_u8;
	t_u8	*b_u8;
	t_u8	temp;

	a_u8 = (t_u8 *)a;
	b_u8 = (t_u8 *)b;
	while (n--)
	{
		temp = *a_u8;
		*a_u8++ = *b_u8;
		*b_u8++ = temp;
	}
}
