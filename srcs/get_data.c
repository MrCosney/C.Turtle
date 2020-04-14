/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 09:19:37 by cosney            #+#    #+#             */
/*   Updated: 2020/04/14 14:25:02 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	get_startposition(int argc, char **argv, int **X)
{
    int j;
    int i;
    
    i = 0;
	while (i < (argc - 1))
	{
	    j = 0;
	    X[i][0] = 0;
    	while (argv[i + 1][j] != ':')
	    {   
		    X[i][0] = 10 * X[i][0];
		    X[i][0] = X[i][0] + (argv[i + 1][j] - '0');
		    j++;
	    }
	    j++;
	    X[i][1] = 0;
	    while (argv[i + 1][j] != '-')
	    {  
		    X[i][1] = 10 * X[i][1];
		    X[i][1] = X[i][1] + (argv[i + 1][j] - '0');
		    j++;
	    }
	    X[i][2] = '\0';
	    i++;
	}
}


int		get_way(int argc, char **argv, char **way)
{
    int j;
    int i;
    int k;
    int n;
    
    i = 0;
	while (i < (argc - 1))
	{   
	    j = 0;
	    k = 0;
	    /*n = 0;
	    while (argv[i + 1][n] != '-')
	    {
	        n++;
	    }
	    if (argv[i + 1][n + 1] == '-')
	        return (0);*/
	    while (argv[i + 1][k] != 'r' && argv[i + 1][k] != 'g' && argv[i + 1][k] != 'l') 
	    {
	        k++;
	    }
	    while (argv[i + 1][k] != '-')
	    {
	        way[i][j] = argv[i+1][k];
	        j++;
		    k++;
	        
	    }
	    way[i][j] = '\0';
	    i++;
	}
	return (0);
}


void	get_name(int argc, char **argv, char **name)
{
    int j;
    int i;
    int k;
    
    i = 0;
	while (i < (argc - 1))
	{   
	    j = 0;
	    k = 0;
	    while (argv[i + 1][k] != '-')
	    {
	        k++;
	    }
	    k = k + 1;
	    while (argv[i + 1][k] != '-')
	    {
	        k++;
	    }
	    k = k + 1;
    	while (argv[i + 1][k] != '\0')
	    {   
            name[i][j] = argv[i+1][k];
		    j++;
		    k++;
	    }
	    name[i][j] = '\0';
	    i++;
	}
}


void	get_data(int argc, char **argv, char **b_argv, int **X, char **way, char **name)
{
    int x;
    int k;
    int i;
    
    k = 0;
    i = 0;
	while (k < (argc - 1))
	{
		x = 0;
		while (argv[k+1][x] != '\0')
		{
			b_argv[k][x] = argv[k+1][x];
			x++;
		}
		b_argv[k][x] = '\0';
		k++;
	}
    get_startposition(argc, argv, X);	
    get_way(argc, argv, way);
    get_name(argc, argv, name);
}
