/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref_u8.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 23:30:08 by codespace         #+#    #+#             */
/*   Updated: 2025/02/22 12:59:54 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REF_U8_H
# define REF_U8_H

# include "types/primitives/ptr_u8.h"

typedef struct s_ref_u8
{
	t_ptr_u8	unsafe;
}				t_ref_u8;

#endif