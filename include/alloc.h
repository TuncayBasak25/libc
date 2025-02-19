/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:27:50 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/18 12:37:00 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALLOC_H
# define ALLOC_H

# include "type.h"

void	*mem_alloc(t_usize size);
bool	mem_free(t_ptr ptr);
bool	mem_free_all();

#endif