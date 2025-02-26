/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:55:04 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/25 13:58:42 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core.h"

t_error	error(t_usize code, char *msg)
{
	return ((t_error){code, msg});
}

t_result	success()
{
	return ((t_result){TRUE, FALSE});
}

t_result	fail()
{
	return ((t_result){FALSE, TRUE});
}