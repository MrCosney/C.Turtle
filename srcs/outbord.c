/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outbord.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 17:24:56 by cosney            #+#    #+#             */
/*   Updated: 2020/04/16 18:42:41 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	outboard(int argc, int pos[][2])
{
	int i;

	i = 0;
	while (i < (argc - 1))
	{
		if (pos[i][0] == 0)
		{
			ft_putstr("start position out of the board");
			return (1);
		}
		i++;
	}
	return (0);
}
