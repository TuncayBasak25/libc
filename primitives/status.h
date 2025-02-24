/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   status.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:00:32 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/22 14:07:33 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STATUS_H
# define STATUS_H

# include "primitives/bool.h"
# include "primitives/u32.h"

typedef struct s_status
{
	t_bool	success;
	t_bool	fail;
}			t_status;

t_status	status_success();
t_status	status_fail();
t_status	status_error(t_u32 code, char *error_status);

#endif