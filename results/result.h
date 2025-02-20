/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 09:35:04 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/20 12:18:10 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RESULT_H
# define RESULT_H

# include "types/bool.h"
# include "types/u32.h"

# define ERR_NULL_REF 1

typedef struct s_result
{
	t_bool	success;
	t_bool	fail;
	t_u32	code;
	char	*msg;
}				t_result;

t_result	ok();
t_result	err(t_u32 code, char *msg);

#endif