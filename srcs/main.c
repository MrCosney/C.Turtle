/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 09:18:11 by cosney            #+#    #+#             */
/*   Updated: 2020/04/16 14:50:05 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "stdio.h"

void	get_winner(int argc, int pos[][100], char way[][1000], int *t_number)
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
		printf ("%d \n", res);
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
	char	way[10][1000];
	char	name[10][100];
	int		t_number;
	int		pos[10][100];
	int		i;

	t_number = -1;

	while(i < 10)
	{
		zeros(way[i], 100);
		i++;
	}
	data(argc, argv, pos, way, name);
	if (check(argc, name, way, pos))
		return (0);
	get_winner(argc, pos, way, &t_number);
	if (t_number != -1)
		ft_putstr(name[t_number]);
	return (0);
}
