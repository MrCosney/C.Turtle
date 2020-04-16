/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 09:18:11 by cosney            #+#    #+#             */
/*   Updated: 2020/04/15 19:18:38 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	get_winner(int argc, int pos[][100], char way[][1000], int *t_number)
{
	int		idx;
	int		direction;
	int		finish;
	int		steps;
	int		res;

	idx = 0;
	finish = 0;
	steps = 0;
	while (idx < (argc - 1))
	{
		direction = 0;
		steps = 0;
		res = cucumber(pos[idx][0], pos[idx][1], way[idx], direction, steps);
		if (finish == 0 || (res != 0 && res < finish))
		{
			finish = res;
			*t_number = idx;
		}
		idx++;
	}
}

int		main(int argc, char **argv)
{
	char	way[10][1000];
	char	name[10][100];
	int		t_number;
	int		pos[10][100];

	data(argc, argv, pos, way, name);
	if (check(argc, name, way, pos))
		return (0);
	get_winner(argc, pos, way, &t_number);
	ft_putstr(name[t_number]);
	return (0);
}
