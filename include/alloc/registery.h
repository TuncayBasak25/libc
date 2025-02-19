/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   registery.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:27:50 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/19 00:00:13 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALLOC_H
# define ALLOC_H

# include "type.h"

typedef struct s_alloc_r
{
	t_ptr	*ptrs;
	t_usize	len;
	t_usize	cap;
}			t_alloc_r;

#endif