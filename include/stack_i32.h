/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_i32.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 13:32:47 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/19 16:19:32 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_i32_H
# define STACK_i32_H

# include "type.h"

typedef struct s_stack_i32
{
	t_i32	*buffer;
	t_u32	len;
	t_u32	cap;
	bool	(*push)(struct s_stack_i32 *self, t_i32 value);
	t_i32	(*pop)(struct s_stack_i32 *self);
	void	(*destroy)(struct s_stack_i32 *self);
}			t_stack_i32;

t_stack_i32	*new_stack_i32();

#endif