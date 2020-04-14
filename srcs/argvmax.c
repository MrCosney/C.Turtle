/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argvmax.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 09:20:13 by cosney            #+#    #+#             */
/*   Updated: 2020/04/14 13:22:09 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		argv_max(int argc, char **argv)
{
    int i;
    int j;
    int maxstr;
    
    maxstr = 0;
    i = 1;
    while (i < argc)
    {
        j = 0;    
        while (argv[i][j] != '\0')
            j++;
        if (j >= maxstr)
            maxstr = j;
        i++;
    }
    return (maxstr);
}
