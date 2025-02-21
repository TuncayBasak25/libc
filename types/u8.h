/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u8.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 23:30:08 by codespace         #+#    #+#             */
/*   Updated: 2025/02/21 15:27:39 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef U8_H
# define U8_H

typedef char	t_u8;
typedef float	f32;


typedef struct s_vec_f32
{
	f32 x;
	f32 y;
}		t_vec_f32;

typedef t_vec_f32 * const	t_vec_f32_p;

typedef struct s_entity
{
	t_vec_f32_p	position; //We generally not prefer using pointers to small structs but this is for demonstration
}				t_entity;

typedef t_entity * const	t_entity_p;

typedef struct s_ptr_entity
{
	t_entity	*ptr;
	t_bool		is_null;
	t_bool		is_valid;
}				t_ptr_entity;

t_option_entity_p	alloc_entity(void); -> for allocating from the heap

t_option_entity_p	entity_try = alloc_entity();

if (entity_try.is_none)//manage fail branch return
t_entity_p entity = entity_try.ptr; //non null guarantee
self.entity->position.x -> safe access

or if entity might be nulled sometimes

self.ptr_entity = ptr_entity_build(NULL);

void	destroy_entity(t_entity_p entity); //Only valid entyties are destroyed, destructions are managed by parents, so every module manage itself safely

#endif