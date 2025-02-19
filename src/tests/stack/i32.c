/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i32.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 10:05:39 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/19 16:23:48 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "stack_i32.h"
#include "debug.h"

__attribute__((constructor))
static void	test(void)
{
	t_stack_i32	*stack;
	t_i32		nums[] = {11, 10, 2, 1, 9};
	t_u16		i;

	stack = new_stack_i32();
	i = 0;
	while (i < sizeof(nums) / sizeof(t_i32))
		stack->push(stack, nums[i++]);
	while (stack->len)
		printf("%i ", stack->pop(stack));
	printf("\n");
	stack->destroy(stack);
}
