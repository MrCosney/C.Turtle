/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 09:18:11 by cosney            #+#    #+#             */
/*   Updated: 2020/04/14 14:37:06 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
    char board[32][32];
    char **b_argv;
    int **X;
    char **way;
    char **name;
    int j; 
    int i;
    int dir;
    int res;
    int index;
    int final;
    int final_index;
    
    board_array(board);
    display_board(board);
    j = argv_max(argc,argv);
    i = 0;
    b_argv = (char**)malloc((argc - 1)*sizeof(char*));
	while (i < (argc - 1))
	{
        b_argv[i] = (char*)malloc(j*sizeof(char*));
        i++;
	}
	i = 0;
	X = (int**)malloc((argc - 1)*sizeof(int*));
	while (i < (argc - 1))
	{
        X[i] = (int*)malloc(2*sizeof(int*));
        i++;
	}
	i = 0;
	way = (char**)malloc((argc - 1)*sizeof(char*));
	while (i < (argc - 1))
	{
        way[i] = (char*)malloc(10*sizeof(char*));
        i++;
	}
	i = 0;
	name = (char**)malloc((argc - 1)*sizeof(char*));
	while (i < (argc - 1))
	{
        name[i] = (char*)malloc(10*sizeof(char*));
        i++;
	}
    //get_data(argc, argv, b_argv, X, way, name);
    //display_boardargv(b_argv, argc, j);
    printf("\n X = %d", X[0][1]);
    printf("\n way = %c", way[1][8]);    
    printf("\n name = %c", name[0][4]); 
    index = 0;
    final = 0;
    while (index < (argc-1))
    {
        dir = 0;
        i = 0;
        //res = cucumber(X[index][0], X[index][1], way[index], dir, i);
        if (final == 0 || (res != 0 && res < final))
        {
            final = res;
            final_index = index;
        }
        index++;
        printf("\n res = %d", res); 
    }
    printf("\n champion = %s", name[final_index]); 
}
