/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 09:18:25 by cosney            #+#    #+#             */
/*   Updated: 2020/04/14 18:36:23 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	check_teleport(char *way, int dir, int *x, int *y, int i);
void    board_array (char board[32][32]);
void    data(int ac, char **ar, int X[][100], char way[][100], char n[][100]);
int     argv_max(int argc, char **argv);
int     cucumber(int x, int y, char *way, int dir, int i);

#endif
