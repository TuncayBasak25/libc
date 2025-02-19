/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 10:05:39 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/19 10:15:16 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "console.h"
#include "mem_op.h"
#include "alloc.h"

__attribute__((constructor))
static void	test(void)
{
	return ;
	t_ptr	mem[16];
	t_u32	i = 0;

	mem[i++] = mem_alloc(16);
	mem[i++] = mem_alloc(8);
	mem[i++] = mem_alloc(4096);
	mem[i++] = mem_alloc(80192);
	mem[i++] = mem_alloc(512);
	mem[i++] = mem_alloc(256);

	if (mem[i - 1])
		printf("Error allocation!\n");
}
