/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   option_i32.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbasak <sbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 23:30:08 by codespace         #+#    #+#             */
/*   Updated: 2025/02/19 21:37:15 by sbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPTION_I32_H
# define OPTION_I32_H

# include "types/primitives/i32.h"
# include "types/primitives/u32.h"

typedef struct s_option_i32
{
	t_i32	value;
	t_u32	error;
}			t_option_i32;

#endif