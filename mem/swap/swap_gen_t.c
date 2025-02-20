/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_gen_t.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:52:23 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/20 12:12:11 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types/gen_t.h"
#include "results/result.h"

t_result	swap_gen_t(t_gen_t *a, t_gen_t *b)
{
	t_gen_t	temp;

	if (!a || !b)
		return (err(ERR_NULL_REF, "swap_gen_t: NULL reference!"));
	temp = *a;
	*a = *b;
	*b = temp;
	return (ok());
}