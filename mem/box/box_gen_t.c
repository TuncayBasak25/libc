/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   box_gen_t.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:52:34 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/25 14:10:37 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "box_gen_t.h"
#include <stdlib.h>

RESULT	new_box_gen_t(t_box_gen_t *out)
{
	t_gen_t	*ptr;

	ptr = (t_gen_t *)malloc(sizeof(t_gen_t));
	if (ptr == NULL)
		return (fail());
	*ptr = (t_gen_t){0};
	out->p = ptr;
	return (success());
}
void	destroy_box_gen_t(t_box_gen_t box)
{
	free(box.p);
}