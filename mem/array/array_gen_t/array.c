/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:52:34 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/03 11:11:30 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array_gen_t.h"
#include <stdlib.h>
#include "mem.h"

RESULT	array_create_gen_t(t_usize len, t_array_gen_t *out)
{
	t_gen_t	*buffer;

	if (len > 0)
	{
		buffer = (t_gen_t *)malloc(sizeof(t_gen_t) * len);
		if (buffer == NULL)
			return (FAIL);
	}
	else
		buffer = NULL;
	*out = (t_array_gen_t){buffer, len};
	return (SUCCESS);
}

RESULT	array_realloc_gen_t(t_array_gen_t *array, t_usize new_len)
{
	t_array_gen_t	new_array;

	if (array_create_gen_t(new_len, &new_array) == FAIL)
		return (FAIL);
	array_copy_gen_t(&new_array, array);
	free(array->buffer);
	*array = new_array;
	return (SUCCESS);
}

RESULT	array_resize_gen_t(t_array_gen_t *array, t_usize new_len)
{
	t_array_gen_t	new_array;

	if (array_create_gen_t(new_len, &new_array) == FAIL)
		return (FAIL);
	free(array->buffer);
	*array = new_array;
	return (SUCCESS);
}

void	array_destroy_gen_t(t_array_gen_t array)
{
	free(array.buffer);
}
