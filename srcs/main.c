/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 09:18:11 by cosney            #+#    #+#             */
/*   Updated: 2020/04/14 18:57:51 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
    char	board[32][32];
    int		pos[100][100];
    char	way[10][100];
    char	name[10][100];
    int		i;
    int		dir;
    int		res;
    int		index;
    int		final;
    int		final_index;
    
    board_array(board);
    i = 0;
    data(argc, argv, pos, way, name); 
    index = 0;
    final = 0;
    while (index < (argc-1))
    {
        dir = 0;
        i = 0;
        res = cucumber(pos[index][0], pos[index][1], way[index], dir, i);
        if (final == 0 || (res != 0 && res < final))
        {
            final = res;
            final_index = index;
        }
        index++;
    }
    printf("champion = %s\n", name[final_index]); 
}
