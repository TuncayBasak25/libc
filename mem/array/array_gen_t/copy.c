/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:52:34 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/03 15:29:44 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array_gen_t.h"
#include "min.h"
#include "mem/copy/copy_gen_t.h"

void	array_copy_gen_t(t_array_gen_t *dst, t_array_gen_t *src)
{
	array_ncopy_gen_t(dst, src, -1);
}

void	array_ncopy_gen_t(t_array_gen_t *dst, t_array_gen_t *src, t_usize n)
{
	t_usize	i;

	n = min_usize(dst->len, n);
	n = min_usize(src->len, n);
	i = 0;
	while (i < n)
	{
		copy_gen_t(dst + i, src + i);
		i++;
	}
}
