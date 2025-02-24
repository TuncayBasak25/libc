/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u32.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 23:30:08 by codespace         #+#    #+#             */
/*   Updated: 2025/02/24 07:33:38 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef U32_H
# define U32_H

# define U32_MIN 0
# define U32_MAX 0xFFFFFFFF

typedef unsigned int	t_u32;
typedef unsigned int	t_u8;
typedef unsigned int	t_bool;

typedef char	t_T;
typedef char	t_error;
typedef char	t_option;
typedef struct s_result
{
	t_bool	fail;
	t_bool	success;
}			t_result;

typedef struct s_ref_meta_private
{
	t_u8	strong_ref_count;
	t_u8	weak_ref_count;
	t_u8	child_weak_count;
	t_u8	child_strong_count;
	t_u8	child_heap_count;
	void	**adresses;//Pointing weak refs/Child weak/strong refs and child heap
}			t_ref_meta_private;

typedef struct s_heap_T
{
	t_T	*ptr;
}		t_heap_T;

typedef struct s_sref_T
{
	t_T	*ptr;
}		t_sref_T;

typedef struct s_wref_T
{
	void	*unsafe_ptr;
	void	*track_ptr;
}			t_wref_T;



#endif