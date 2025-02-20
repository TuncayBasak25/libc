/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_n_gen_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:52:23 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/20 12:04:42 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "types/gen_t.h"
# include "types/usize.h"
# include "results/result.h"

t_result	swap_n_gen_t(t_gen_t *a, t_gen_t *b, t_usize n)
{
	t_gen_t	temp;

	if (!n)
		return (ok());
	if (!a || !b)
		return (err(ERR_NULL_REF, "swap_n_gen_t: NULL reference!"));
	while (n--)
	{
		temp = *a;
		*a++ = *b;
		*b++ = temp;
	}
	return (ok());
}