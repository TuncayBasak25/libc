/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref_gen_t.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:34:30 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/26 07:31:13 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SREF_GEN_T_H
# define SREF_GEN_T_H

# include "core.h"
# include "box_gen_t.h"

typedef char	t_gen_t;

typedef struct s_sref_gen_t
{
	t_gen_t	*p;
}			t_sref_gen_t;

typedef struct s_wref_gen_t
{
	void	*unsafe_ptr;
	t_usize	index;
}			*t_wref_gen_t;

RESULT			new_sref_gen_t(t_sref_gen_t *out);
t_sref_gen_t	clone_sref_gen_t(t_sref_gen_t *self);
t_wref_gen_t	watch_
void			destroy_sref_gen_t(t_sref_gen_t sref);

#endif