/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:07:18 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/19 14:05:39 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "type.h"
#include "console.h"

static void	print(t_strlit msg)
{
	t_usize	i;

	i = 0;
	while (msg[i])
		i++;
	write(1, msg, i);
}

void	debug(t_strlit msg)
{
	if (!msg)
		msg = "Null debug message!";
	print(RED);
	print(msg);
	print(RESET "\n");
}