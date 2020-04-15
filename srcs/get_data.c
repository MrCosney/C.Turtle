/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 09:19:37 by cosney            #+#    #+#             */
/*   Updated: 2020/04/14 19:17:36 by cosney           ###   ########.fr       */
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

void	get_way(int argc, char **argv, char way[][1000])
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

void	data(int agc, char **agv, int X[][100], char w[][1000], char n[][100])
{
    get_startposition(agc, agv, X);	
    get_way(agc, agv, w);
    get_name(agc, agv, n);
}
