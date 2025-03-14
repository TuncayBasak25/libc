/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   box_gen_t.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:34:30 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/03 14:28:14 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOX_GEN_T_H
# define BOX_GEN_T_H

# include "core.h"

typedef char	t_gen_t;

typedef struct s_box_gen_t
{
	t_gen_t	*ptr;
}			t_box_gen_t;

RESULT	box_create_gen_t(t_gen_t *object, t_box_gen_t *out);
void	box_destroy_gen_t(t_box_gen_t box);

#endif