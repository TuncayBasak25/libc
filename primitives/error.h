/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:48:29 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/22 14:08:36 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H

# include "primitives/bool.h"
# include "primitives/u32.h"

typedef struct s_error_status
{
	t_bool	none;
	t_bool	some;
}			t_error_status;

typedef struct s_error
{
	t_u32	code;
	char	*msg;
}			t_error;

void			error_push(t_error error);
t_error_status	error_pop(t_error *error);
void			error_reset();

#endif