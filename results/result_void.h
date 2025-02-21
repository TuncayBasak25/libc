/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result_void.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 09:35:04 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/20 21:35:09 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RESULT_VOID_H
# define RESULT_VOID_H

# include "types/bool.h"
# include "types/u16.h"

typedef struct s_result_void
{
	t_bool	success;
	t_bool	fail;
	t_u16	code;
}			t_result_void;

t_result_void	ok_void();
t_result_void	err_void(t_u16 code);

#endif