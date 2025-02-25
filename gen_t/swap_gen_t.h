/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_gen_t.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:36 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/24 12:15:27 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_GEN_T_H
# define SWAP_GEN_T_H

# include "core.h"
# include "gen_t.h"

static inline void	swap_gen_t(t_gen_t *a, t_gen_t *b)
{
	t_gen_t	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#endif