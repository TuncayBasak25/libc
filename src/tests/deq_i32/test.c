/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 10:05:39 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/19 16:12:45 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "deq_i32.h"
#include "debug.h"

static void	print(t_deq_i32 *deq)
{
	t_u16	i;

	i = 0;
	while (i < deq->len)
	// printf("%u", deq->cap);
		printf("%i ", deq_i32_get(deq, i++));
	printf("\n");
}

__attribute__((constructor))
static void	test(void)
{
	return ;
	t_deq_i32	*deq;
	t_i32		nums[] = {11, 10, 2, 1, 9};
	t_i32		max;
	t_i32		first;
	t_u16		i;

	deq = deq_i32_create();
	i = 0;
	while (i < sizeof(nums) / 4)
		deq_i32_push_back(deq, nums[i++]);
	print(deq);
	max = deq_i32_get_max(deq);
	while (!deq_i32_is_inc_sorted(deq))
	{
		sleep(1);
		first = deq_i32_get(deq, 0);
		if (first > deq_i32_get(deq, 1) && max != first)
			deq_i32_swap(deq, 0, 1);
		else
			deq_i32_rotate_front(deq);
		printf("|%u|\n", deq->len);
		print(deq);
	}
}
