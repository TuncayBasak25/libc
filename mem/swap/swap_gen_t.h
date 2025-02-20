/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_gen_t.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:52:23 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/20 11:29:55 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_GEN_T_H
# define SWAP_GEN_T_H

# include "types/gen_t.h"
# include "results/result.h"

static inline t_result	swap_gen_t(t_gen_t *a, t_gen_t *b)
{
	t_gen_t	temp;

	if (!a || !b)
		return (err(ERR_NULL_REF, "swap_gen_t: NULL reference!"));
	temp = *a;
	*a = *b;
	*b = temp;
	return (ok());
}

#endif