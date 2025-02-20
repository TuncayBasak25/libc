/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:16:37 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/20 12:19:25 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "results/result.h"

t_result	ok()
{
	return ((t_result){TRUE, FALSE, 0, ""});
}

t_result	err(t_u32 code, char *msg)
{
	return ((t_result){FALSE, TRUE, code, msg});
}