/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option_gen_t.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 09:07:59 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/20 12:23:49 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPTION_GEN_T_H
# define OPTION_GEN_T_H

# include "types/bool.h"
# include "types/gen_t.h"

typedef struct s_option_gen_t
{
	t_gen_t	value;
	t_bool	is_some;
	t_bool	is_none;
}			t_option_gen_t;

t_option_gen_t	some_gen_t(t_gen_t value);
t_option_gen_t	none_gen_t();

#endif