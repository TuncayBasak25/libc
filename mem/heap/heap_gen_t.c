/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heap_gen_t.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 09:37:47 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/24 10:46:27 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "heap/heap_gen_t.h"
#include <stdlib.h>

t_result	try_alloc_gen_t(t_heap_gen_t *self)
{
	t_gen_t	*ptr;

	ptr = (t_gen_t *)malloc(sizeof(t_gen_t));
	if (ptr == NULL)
		return (FAIL);
	self->ptr = ptr;
	return (SUCCESS);
}

void	free_gen_t(t_heap_gen_t self)
{
	free(self.ptr);
}