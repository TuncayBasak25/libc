/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_gen_t.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 13:34:30 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/03 15:01:34 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_GEN_T_H
# define ARRAY_GEN_T_H

# include "core.h"

typedef char	t_gen_t;

typedef struct s_array_gen_t
{
	t_gen_t	*buffer;
	t_u32	len;
	t_u32	cap;
}			t_array_gen_t;

RESULT	array_create_gen_t(t_usize len, t_array_gen_t *out);
void	array_destroy_gen_t(t_array_gen_t box);

RESULT	array__gen_t(t_array_gen_t *array, t_usize new_len);

void	array_copy_gen_t(t_array_gen_t *dst, t_array_gen_t *src);
void	array_ncopy_gen_t(t_array_gen_t *dst, t_array_gen_t *src, t_usize n);

void	array_swap_gen_t(t_array_gen_t *a, t_array_gen_t *b);
void	array_nswap_gen_t(t_array_gen_t *a, t_array_gen_t *b, t_usize n);

#endif