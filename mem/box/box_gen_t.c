/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   box_gen_t.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:52:34 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/03 14:25:50 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "box_gen_t.h"
#include "mem.h"
#include <stdlib.h>

RESULT	box_create_gen_t(t_gen_t *object, t_box_gen_t *out)
{
	t_gen_t	*ptr;

	ptr = (t_gen_t *)malloc(sizeof(t_gen_t));
	if (ptr == NULL)
		return (FAIL);
	mem_copy_unsafe(ptr, object, sizeof(t_gen_t));
	out->ptr = ptr;
	return (SUCCESS);
}

void	box_destroy_gen_t(t_box_gen_t box)
{
	gen_t_destroy(box.ptr);//If gen_t implemets a destroy
	free(box.ptr);
}
