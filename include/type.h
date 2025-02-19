/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 23:30:08 by codespace         #+#    #+#             */
/*   Updated: 2025/02/18 11:15:41 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_H
# define TYPE_H

# include <stdbool.h>

# define NULL ((void *)0)

typedef char				t_i8;
typedef short				t_i16;
typedef int					t_i32;
typedef long long			t_i64;
typedef t_i64				t_isize;

typedef unsigned char		t_u8;
typedef unsigned short		t_u16;
typedef unsigned int		t_u32;
typedef unsigned long long	t_u64;
typedef t_u64				t_usize;

typedef const char *		t_strlit;

typedef void *				t_ptr;
typedef t_ptr *				t_ptrs;
typedef t_ptr *				t_ref_ptr;
typedef t_ptrs *			t_ref_ptrs;

#endif