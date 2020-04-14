/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_board.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 13:25:39 by cosney            #+#    #+#             */
/*   Updated: 2020/04/14 13:34:22 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void    display_boardargv(char **b_argv, int argc, int j)
{
	int x;
	int y;

	x = 0;
	while (x < (argc - 1))
	{
		y = 0;
		while (y < j)
		{
			write(1, &b_argv[x][y], 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
}
