/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:48:29 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/22 14:21:16 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "primitives/u8.h"
# include "primitives/error.h"

typedef struct s_error_registery
{
	t_error	errors[256];
	t_u8	len;
}			t_error_registery;

static t_error_registery	*get_error_registery()
{
	static t_error_registery	registery = (t_error_registery){0};

	return (&registery);
}

void			error_push(t_error error)
{
	t_error_registery	*registery;

	registery = get_error_registery();
	registery->errors[registery->len & 255] = error;
}

t_error_status	error_pop(t_error *error)
{
	t_error_registery	*registery;

	registery = get_error_registery();
	if (registery->len == 0)
	{
		*error = (t_error){0};
		return ((t_error_status){TRUE, FALSE});
	}
	*error = registery->errors[--registery->len & 255];
	return ((t_error_status){FALSE, TRUE});
}

void			error_reset()
{
	get_error_registery()->len = 0;
}