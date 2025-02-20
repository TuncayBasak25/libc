/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_n_gen_t.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:52:23 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/20 12:04:20 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_N_GEN_T_H
# define SWAP_N_GEN_T_H

# include "types/gen_t.h"
# include "types/usize.h"
# include "results/result.h"

t_result	swap_n_gen_t(t_gen_t *a, t_gen_t *b, t_usize n);

#endif