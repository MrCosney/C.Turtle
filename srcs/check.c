/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 16:32:35 by cosney            #+#    #+#             */
/*   Updated: 2020/04/15 19:17:20 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		check_name(int argc, char n[][100])
{
	int		i;
	int		j;

	i = 0;
	while(i < (argc - 1))
	{
		j = 0;
		while(n[i][j] != '\0')
		{
			if ((n[i][j] >= 'a' && n[i][j] <= 'z') \
				|| (n[i][j] >= 'A' && n[i][j] <= 'Z'))
				j++;
			else
			{
				ft_putstr("Ooops...Such names are more like kids Nicknames ");
				ft_putstr("in the Minecraft. Don't use it for Turtles!!>_<\n");
				return (1);
			}
		}
		i++;
	}
	return (0);
}


int		check(int argc, char name[][100],char way[][1000], int pos[][100])
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
	if (check_name(argc, name))
		return (1);
	return (0);
}
