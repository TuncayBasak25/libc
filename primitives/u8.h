/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u8.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 23:30:08 by codespace         #+#    #+#             */
/*   Updated: 2025/02/22 19:23:04 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef U8_H
# define U8_H

# define U8_MIN 0
# define U8_MAX 0xFF

typedef unsigned char	t_u8;

typedef struct s_ptr_u8
{
	t_u8	*safe;//Safe non null as soon as the owner doesnt destroy it, my_ptr.safe->fields, safe access no need check
}			t_ptr_u8;

typedef struct s_ref_u8 *t_ref_u8;//Weak ref, can be nulled bu the time, first use resolve to get a ptr, or fail

t_u8	*ref_resolve_unsafe(t_ref_u8 ref);

t_u8	*ptr;
ptr = ref_u8_resolve_unsafe(my_u8_ref);
//ptr can be null, first need to check if (ptr == NULL)//fail case, we always considere T * as unsafe, api's either check them and fail, or are named with unsafe if they directly accept without fail return status

t_u8	*ptr;
if (ref_u8_resolve(my_u8_ref, &ptr).fail)//Fail case, safe and clean readable usage
//ptr is safe

if (tryget_something(&collector).fail)
	//fail case
else if (get_last_status().none)
	//success but no value
else
	//value

#endif