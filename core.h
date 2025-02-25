/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:11:09 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/24 18:21:18 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_H
# define CORE_H

typedef unsigned char		t_u8;
typedef unsigned short		t_u16;
typedef unsigned int		t_u32;
typedef unsigned long long	t_u64;
typedef unsigned long long	t_usize;

typedef char				t_i8;
typedef short				t_i16;
typedef int					t_i32;
typedef long long			t_i64;
typedef long long			t_isize;

typedef char				t_bool;

# define TRUE ((t_bool)1)
# define FALSE ((t_bool)0)

typedef struct s_result
{
	t_bool	is_success;
	t_bool	is_fail;
}			t_result;

# define SUCCESS ((t_result){TRUE, FALSE})
# define FAIL ((t_result){FALSE, TRUE})

#endif