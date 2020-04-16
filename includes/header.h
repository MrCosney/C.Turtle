/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 09:18:25 by cosney            #+#    #+#             */
/*   Updated: 2020/04/16 14:37:22 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <unistd.h>

void	check_teleport(char *way, int dir, int *x, int *y, int i);
void	data(int ac, char **ar, int X[][100], char way[][1000], char n[][100]);
void	ft_putstr(char *str);
void	zeros(char *str, int var);
int		cucumber(int x, int y, char *way, int dir, int i);
int		check(int argc, char name[][100], char way[10][1000], int pos[][100]);

#endif
