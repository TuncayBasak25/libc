/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_0.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:26:03 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/24 12:35:40 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gen_t/array_gen_t.h"

t_array_gen_t	build_array_gen_t(t_gen_t *buffer, t_usize size)
{
	return ((t_array_gen_t){buffer, size});
}

t_array_gen_t	array_gen_t_slice(t_array_gen_t *super, t_isize off, t_usize len)
{
	if (super->size + off < 0)
		return (array_gen_t(super->buffer, 0));
	if (off + len > super->size)
		return (array_gen_t(super->buffer, 0));
}