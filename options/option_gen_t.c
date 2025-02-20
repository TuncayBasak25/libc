/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option_gen_t.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 09:07:59 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/20 12:23:33 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "options/option_gen_t.h"


t_option_gen_t	some_gen_t(t_gen_t value)
{
	return ((t_option_gen_t){value, TRUE, FALSE});
}

t_option_gen_t	none_gen_t()
{
	return ((t_option_gen_t){0, FALSE, TRUE});
}
