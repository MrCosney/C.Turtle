/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 09:19:37 by cosney            #+#    #+#             */
/*   Updated: 2020/04/14 18:38:52 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	get_startposition(int argc, char **argv, int X[][100])
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

void	get_way(int argc, char **argv, char way[][100])
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
	        k++;
	    k = k + 1;
	    while (argv[i + 1][k] != '-')
	    {
	       	way[i][j] = argv[i + 1][k];
	       	j++;
		   	k++;
		}
	    way[i][j] = '\0';
	    i++;
	}
}

void	get_name(int argc, char **argv, char name[][100])
{
    int		i;
    int		j;
    int		k;
    
    i = 0;
	while (i < (argc - 1))
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
    	while (argv[i + 1][k] != '\0')
	    {   
            name[i][j] = argv[i + 1][k];
		    j++;
		    k++;
	    }
	    name[i][j] = '\0';
	    i++;
	}
}

void	data(int agc, char **agv, int X[][100], char way[][100], char n[][100])
{
    get_startposition(agc, agv, X);	
    get_way(agc, agv, way);
    get_name(agc, agv, n);
}
