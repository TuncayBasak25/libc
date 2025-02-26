/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:11:09 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/25 13:59:28 by tbasak           ###   ########.fr       */
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

# define TRUE 1
# define FALSE 0

typedef struct s_error
{
	t_usize	code;
	char	*msg;
}			t_error;

t_error	error(t_usize code, char *msg);

typedef struct s_result
{
	t_bool	is_success;
	t_bool	is_fail;
}			t_result;

# define RESULT t_result __attribute__((warn_unused_result))

t_result	success();
t_result	fail();

#endif