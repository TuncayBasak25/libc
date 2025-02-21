/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result_void.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:16:37 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/20 21:36:06 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "results/result_void.h"

t_result_void	ok()
{
	return ((t_result_void){TRUE, FALSE, 0});
}

t_result_void	err(t_u16 code)
{
	return ((t_result_void){FALSE, TRUE, code});
}