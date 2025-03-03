/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:52:34 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/03 10:50:58 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array_gen_t.h"
#include "min.h"
#include "mem.h"

void	array_swap_gen_t(t_array_gen_t *a, t_array_gen_t *b)
{
	array_nswap_gen_t(a, b, -1);
}

void	array_nswap_gen_t(t_array_gen_t *a, t_array_gen_t *b, t_usize n)
{
	n = min_usize(a->len, n);
	n = min_usize(b->len, n);
	mem_swap_unsafe(a->buffer, b->buffer, sizeof(t_gen_t) * n);
}
