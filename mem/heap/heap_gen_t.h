/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heap_gen_t.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:37:47 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/24 10:41:27 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAP_GEN_T_H
# define HEAP_GEN_T_H

# include "core.h"

typedef char	t_gen_t;//Include the type

typedef struct s_heap_gen_t
{
	t_gen_t	*ptr;
}			t_heap_gen_t;

t_result	try_alloc_gen_t(t_heap_gen_t *self);

void		free_gen_t(t_heap_gen_t self);

#endif