/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sweet_cucumber.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 09:22:07 by cosney            #+#    #+#             */
/*   Updated: 2020/04/16 14:41:41 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		cucumber(int x, int y, char *way, int dir, int i)
{
	if (way[i] == 'l' && dir == 0)
		dir = 1;
	else if (way[i] == 'l' && dir == 1)
		dir = 2;
	else if (way[i] == 'l' && dir == 2)
		dir = 3;
	else if (way[i] == 'l' && dir == 3)
		dir = 0;
	if (way[i] == 'r' && dir == 0)
		dir = 3;
	else if (way[i] == 'r' && dir == 3)
		dir = 2;
	else if (way[i] == 'r' && dir == 2)
		dir = 1;
	else if (way[i] == 'r' && dir == 1)
		dir = 0;
	check_teleport(way, dir, &x, &y, i);
	if (x == 15 && y == 15 && way[i] == '\0')
		return (i);
	i++;
	if (x == 15 && y == 15 && way[i] == '\0')
		return (i);
	if (way[i] != '\0')
		return (cucumber(x, y, way, dir, i));
	return (-1);
}
