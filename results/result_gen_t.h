/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result_gen_t.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 09:35:04 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/20 12:21:20 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RESULT_GEN_T_H
# define RESULT_GEN_T_H

# include "types/bool.h"
# include "types/u32.h"
# include "types/gen_t.h"

typedef struct s_result_gen_t
{
	t_gen_t	value;
	t_bool	success;
	t_bool	fail;
	t_u32	code;
	char	*msg;
}				t_result_gen_t;

t_result_gen_t	ok_gen_t(t_gen_t value);
t_result_gen_t	err_gen_t(t_u32 code, char *msg);

#endif