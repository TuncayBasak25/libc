/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_gen_t.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:13:36 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/24 12:18:31 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COPY_GEN_T_H
# define COPY_GEN_T_H

# include "core.h"
# include "gen_t.h"

static inline void	copy_gen_t(t_gen_t *dst, t_gen_t *src)
{
	*dst = *src;
}

#endif