/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:33:46 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/20 00:35:35 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types/primitives/strlit.h"

t_usize	strlit_len(t_strlit str)
{
	t_usize	len;

	if (!str)
		return (0);
	len = 0;
	while (str[len])
		len++;
	return (len);
}