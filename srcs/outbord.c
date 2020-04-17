/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outbord.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 17:24:56 by cosney            #+#    #+#             */
/*   Updated: 2020/04/17 12:48:24 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		name_len(int argc, char **argv)
{
	int		i;
	int		k;
	int		j;

	i = -1;
	while (++i < (argc - 1))
	{
		j = 0;
		k = 0;
		while (j < 2)
		{
			while (argv[i + 1][k] != '-')
				k++;
			k = k + 1;
			j++;
		}
		j = 0;
		while (argv[i + 1][j + k] != '\0')
			j++;
		if (j > 1478)
		{
			ft_putstr("Error: Long name\nLongest name in world - 1478 let.\n");
			return (1);
		}
	}
	return (0);
}

int		outboard(int argc, int pos[][2])
{
	int i;

	i = 0;
	while (i < (argc - 1))
	{
		if (pos[i][0] == 0)
		{
			ft_putstr("Error: start position out of the board\n");
			ft_putstr("You left no chance for poor turtles, foooo -_-\n");
			return (1);
		}
		i++;
	}
	return (0);
}

int		empty_name(int argc, char name[][SIZ1])
{
	int i;

	i = 0;
	while (i < (argc - 1))
	{
		if (name[i][0] == '\0')
		{
			ft_putstr("Error: There is no name for the turtle! \n");
			ft_putstr("How dare you are! Life without a name is tough! =((\n");
			return (1);
		}
		i++;
	}
	return (0);
}
