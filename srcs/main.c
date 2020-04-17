/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 09:18:11 by cosney            #+#    #+#             */
/*   Updated: 2020/04/16 18:46:02 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	get_winner(int argc, int pos[][2], char way[][SIZ], int *t_number)
{
	int		idx;
	int		direction;
	int		finish;
	int		steps;
	int		res;

	idx = 0;
	finish = -1;
	while (idx < (argc - 1))
	{
		direction = 0;
		steps = 0;
		res = cucumber(pos[idx][0], pos[idx][1], way[idx], direction, steps);
		if (res != -1 && (res < finish || finish == -1))
		{
			finish = res;
			*t_number = idx;
		}
		idx++;
	}
}

int		main(int argc, char **argv)
{
	char	way[argc - 1][SIZ];
	char	name[argc - 1][SIZ];
	int		pos[argc - 1][2];
	int		t_number;

	t_number = -1;
	while(++t_number < (argc - 1))
	{
		zeros(way[t_number], SIZ);
		zeros(name[t_number], SIZ);
	}
	if (check(argc, argv))
		return (0);
	data(argc, argv, pos, way, name);
	if (outboard(argc, pos))
		return (0);
	t_number = -1;
	get_winner(argc, pos, way, &t_number);
	if (t_number != -1)
		ft_putstr(name[t_number]);
	else
		ft_putstr("Sorry no cucumber");
	ft_putstr("\n");
	return (0);
}
