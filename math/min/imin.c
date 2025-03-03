/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imin.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 09:47:30 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/03 09:50:48 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "min.h"

t_i8	min_i8(t_i8 a, t_i8 b)
{
	if (a < b)
		return (a);
	return (b);
}

t_i16	min_i16(t_i16 a, t_i16 b)
{
	if (a < b)
		return (a);
	return (b);
}

t_i32	min_i32(t_i32 a, t_i32 b)
{
	if (a < b)
		return (a);
	return (b);
}

t_i64	min_i64(t_i64 a, t_i64 b)
{
	if (a < b)
		return (a);
	return (b);
}

t_isize	min_isize(t_isize a, t_isize b)
{
	if (a < b)
		return (a);
	return (b);
}
