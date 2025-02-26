/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   box_gen_t.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:34:30 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/25 13:51:58 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOX_GEN_T_H
# define BOX_GEN_T_H

# include "core.h"

typedef char	t_gen_t;

typedef struct s_box_gen_t
{
	t_gen_t	*p;
}			t_box_gen_t;

RESULT	new_box_gen_t(t_box_gen_t *out);
void	destroy_box_gen_t(t_box_gen_t box);

#endif