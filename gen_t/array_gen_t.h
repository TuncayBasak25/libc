/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_gen_t.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:45:44 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/24 12:35:28 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_GEN_T_H
# define ARRAY_GEN_T_H

# include "core.h"
# include "gen_t.h"

typedef struct s_array_gen_t
{
	t_gen_t	*buffer;
	t_usize	size;
}			t_array_gen_t;

t_array_gen_t	build_array_gen_t(t_gen_t *buffer, t_usize size);

#endif