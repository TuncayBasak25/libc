/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 09:45:34 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/03 09:53:07 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIN_H
# define MIN_H

# include "core.h"

t_u8	min_u8(t_u8 a, t_u8 b);
t_u16	min_u16(t_u16 a, t_u16 b);
t_u32	min_u32(t_u32 a, t_u32 b);
t_u64	min_u64(t_u64 a, t_u64 b);
t_usize	min_usize(t_usize a, t_usize b);
t_i8	min_i8(t_i8 a, t_i8 b);
t_i16	min_i16(t_i16 a, t_i16 b);
t_i32	min_i32(t_i32 a, t_i32 b);
t_i64	min_i64(t_i64 a, t_i64 b);
t_isize	min_isize(t_isize a, t_isize b);

#endif