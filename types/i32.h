/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i32.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 23:30:08 by codespace         #+#    #+#             */
/*   Updated: 2025/02/22 12:40:18 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I32_H
# define I32_H

# define I32_MIN -2147483648
# define I32_MAX 2147483647

typedef int	t_i32;
typedef struct s_ptr_i32
{
	t_i32 *	ptr;
}					t_ptr_i32;


typedef unsigned char t_u8;
typedef unsigned short t_u16;
typedef unsigned char t_bool;

typedef struct s_alloc_meta
{
	t_u8	strong_refs;
	t_u8	weak_refs;
	void	**child_refs;
	t_u8	weak_child_refs;
	t_u8	strong_child_refs;
	t_u32	flas_or_future_use;
}			t_alloc_meta;

#endif