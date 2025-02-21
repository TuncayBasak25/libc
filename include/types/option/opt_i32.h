/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opt_i32.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 23:30:08 by codespace         #+#    #+#             */
/*   Updated: 2025/02/19 23:54:37 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPT_I32_H
# define OPT_I32_H

# include "types/primitives/i32.h"
# include "types/primitives/u32.h"

typedef struct s_opt_i32
{
	t_i32	value;
	t_u32	error;
}			t_opt_i32;

static inline t_opt_i32	opt_i32(t_i32 value, t_u32 error)
{
	return ((t_opt_i32){value, error});
}

#endif