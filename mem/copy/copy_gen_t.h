/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_gen_t.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:27:15 by tbasak            #+#    #+#             */
/*   Updated: 2025/03/03 15:18:35 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COPY_GEN_T_H
# define COPY_GEN_T_H

# include "core.h"

typedef char	t_gen_t;

void	copy_gen_t(t_gen_t *dst, const t_gen_t *src);

#endif