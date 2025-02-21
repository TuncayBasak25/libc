/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   result_gen_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:16:37 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/20 21:38:08 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "results/result_gen_t.h"

t_result_gen_t	ok_gen_t(t_gen_t value)
{
	return ((t_result_gen_t){value, TRUE, FALSE, 0});
}

t_result_gen_t	err_gen_t(t_u16 code)
{
	return ((t_result_gen_t){0, FALSE, TRUE, code});
}