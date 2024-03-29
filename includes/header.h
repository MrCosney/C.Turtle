/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 09:18:25 by cosney            #+#    #+#             */
/*   Updated: 2020/04/17 12:45:22 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <unistd.h>
#define SIZ 1001
#define SIZ1 1478

void	check_teleport(char *way, int dir, int *x, int *y, int i);
void	data(int ac, char **ar, int X[][2], char way[][SIZ], char n[][SIZ1]);
void	ft_putstr(char *str);
void	zeros(char *str, int var);
void	print(void);
void	print_win(char *name);
int		name_len(int argc, char **argv);
int		cucumber(int x, int y, char *way, int dir, int i);
int		check(int argc, char **argv);
int		outboard(int argc, int pos[][2]);
int		empty_name(int argc, char name[][SIZ1]);

#endif
