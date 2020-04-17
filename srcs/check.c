/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 16:32:35 by cosney            #+#    #+#             */
/*   Updated: 2020/04/16 17:57:17 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

struct s_index
{
	int		i;
	int		j;
	int		k;
}s;

int		input_check(int argc, char **argv)
{
	int t;
	int d;

	s.i = -1;
	while (++s.i < (argc - 1))
	{
		s.j = 0;
		d = 0;
		t = 0;
		while (argv[s.i + 1][s.j] != '\0')
		{
			if (argv[s.i + 1][s.j] == ':')
				d++;
			if (argv[s.i + 1][s.j] == '-')
				t++;
			s.j++;
		}
		if (d != 1 || t != 2)
		{
			ft_putstr("Error input");
			return (1);	
		}
	}
	return (0);
}

int		pos_check(int argc, char **argv)
{	
	s.i = 0;
	while (s.i < (argc - 1))
	{
		if (((argv[s.i + 1][0] >= '0' && argv[s.i + 1][0] <= '9' \
				&& argv[s.i + 1][1] == ':') || \
				(argv[s.i + 1][0] >= '0' && argv[s.i + 1][0] <= '9' \
				&& argv[s.i + 1][1] >= '0' && argv[s.i + 1][1] <= '9' \
				&& argv[s.i + 1][2] == ':')) && \
				((argv[s.i + 1][2] >= '0' && argv[s.i + 1][2] <= '9' \
				&& argv[s.i + 1][3] == '-') || \
				(argv[s.i + 1][2] >= '0' && argv[s.i + 1][2] <= '9' \
				&& argv[s.i + 1][3] >= '0' && argv[s.i + 1][3] <= '9' \
				&& argv[s.i + 1][4] == '-') || \
				(argv[s.i + 1][3] >= '0' && argv[s.i + 1][3] <= '9' \
				 && argv[s.i + 1][4] == '-') || \
				(argv[s.i + 1][3] >= '0' && argv[s.i + 1][3] <= '9' \
				 && argv[s.i + 1][4] >= '0' && argv[s.i + 1][4] <= '9' \
				 && argv[s.i + 1][5] == '-')))
			s.i++;
		else
		{
			ft_putstr("Error start posion");
			return (1);
		}
	}
	return (0);
}

int		check_name(int argc, char **argv)
{
	s.i = -1;
	while (++s.i < (argc - 1))
	{
		s.j = 0;
		s.k = 0;
		while (s.j < 2)
		{
			while (argv[s.i + 1][s.k] != '-')
				s.k++;
			s.k = s.k + 1;
			s.j++;
		}
		while (argv[s.i + 1][s.k] != '\0')
		{
			if ((argv[s.i + 1][s.k] >= 'a' && argv[s.i + 1][s.k] <= 'z') \
				|| (argv[s.i + 1][s.k] >= 'A' && argv[s.i + 1][s.k] <= 'Z'))
				s.k++;
			else
			{
				ft_putstr("Ooops...Such names are more like kids Nicknames ");
				ft_putstr("in the Minecraft. Don't use it for Turtles!!>_<\n");
				return (1);
			}		
		}
	}
	return (0);
}				


int		check_way(int argc, char **argv)
{
	s.i = -1;
	while (++s.i < (argc - 1))
	{
		s.k = 0;
		while (argv[s.i + 1][s.k] != '-')
			s.k++;
		s.k = s.k + 1;
		while (argv[s.i + 1][s.k] != '-')
		{
			if (argv[s.i + 1][s.k] == 'r' || argv[s.i + 1][s.k] == 'l' \
				|| argv[s.i + 1][s.k] == 'g')
				s.k++;
			else 
			{
				ft_putstr("I don't know this way");
				return (1);
			}
		}
	}
	return (0);
}


int		check(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr("Noo..There's no Turtles. God Damn Mario ate them all ;(\n");
		return (1);
	}
	else if (argc > 11)
	{
		ft_putstr("SO MANY TURTLESSS!!");
		return (1);
	}
	if (input_check(argc, argv))
		return (1);
	if (pos_check(argc, argv))
		return (1);
	if (check_way(argc, argv))
		return (1);
	if (check_name(argc, argv))
		return (1);
	return (0);
}
