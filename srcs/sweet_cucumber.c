/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sweet_cucumber.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 09:22:07 by cosney            #+#    #+#             */
/*   Updated: 2020/04/14 13:35:16 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

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
        
    if (way[i] == 'g' && dir == 0)
    {
        if (x == 30)
            x = 0;
        x = x + 1;
    }
    else if (way[i] == 'g' && dir == 1)
    {
        if (y == 30)
            y = 0;
        y = y + 1;
    }
    else if (way[i] == 'g' && dir == 2)
    {
        if (x == 1)
            x = 30;
        x = x - 1;
    }
    else if (way[i] == 'g' && dir == 3)
    {
        if (y == 1)
            y = 30;
        y = y - 1;
    }
    printf ("\n i = %d", i);
    printf ("\n X = %d", x);
    printf ("\n Y = %d", y);
    printf ("\n napravlenie = %d", dir);
    i++;        
    if (way[i] != '\0')
        return (cucumber(x, y, way, dir, i));
    if (x == 15 && y == 15 && way[i] == '\0')
        return (i);
    return (0);
}
