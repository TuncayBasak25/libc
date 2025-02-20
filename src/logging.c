/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logging.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbasak <tbasak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:07:18 by tbasak            #+#    #+#             */
/*   Updated: 2025/02/20 07:59:00 by tbasak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "types/primitives/strlit.h"
#include "logging.h"

static void	print(t_strlit msg)
{
	t_usize	i;

	i = 0;
	while (msg[i])
		i++;
	write(1, msg, i);
}

void	error_log(t_strlit msg)
{
	if (!msg)
		msg = "Null debug message!";
	print(RED);
	print(msg);
	print(RESET "\n");
}

void	println(t_strlit msg)
{
	if (!msg)
		msg = "Null println!";
	print(GREEN);
	print(msg);
	print(RESET "\n");
}