/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   umin.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 09:47:30 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/03 09:53:02 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "min.h"

t_u8	min_u8(t_u8 a, t_u8 b)
{
	if (a < b)
		return (a);
	return (b);
}

t_u16	min_u16(t_u16 a, t_u16 b)
{
	if (a < b)
		return (a);
	return (b);
}

t_u32	min_u32(t_u32 a, t_u32 b)
{
	if (a < b)
		return (a);
	return (b);
}

t_u64	min_u64(t_u64 a, t_u64 b)
{
	if (a < b)
		return (a);
	return (b);
}

t_usize	min_usize(t_usize a, t_usize b)
{
	if (a < b)
		return (a);
	return (b);
}
