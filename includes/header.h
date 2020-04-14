/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 09:18:25 by cosney            #+#    #+#             */
/*   Updated: 2020/04/14 14:24:02 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void    board_array (char board[32][32]);
void    get_data(int argc, char **argv, char **b_argv, int **X, char **way, char **name);
void    display_board (char board[32][32]);
void    display_boardargv (char **b_argv, int argc, int j);
int     argv_max(int argc, char **argv);
int     cucumber(int x, int y, char *way, int dir, int i);


#endif
