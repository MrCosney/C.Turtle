/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 18:49:17 by cosney            #+#    #+#             */
/*   Updated: 2020/04/17 11:55:02 by cosney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print(void)
{
	ft_putstr("              #####      '\n");
	ft_putstr("             ##   ### ''''\n");
	ft_putstr("             #   *  #   '''''\n");
	ft_putstr("             # *    ##  '\n");
	ft_putstr("            ##     * #\n");
	ft_putstr("           ##   *    #\n");
	ft_putstr("          ##  *   * #\n");
	ft_putstr("  '     ###    *   ##\n");
	ft_putstr("'''''  ##   *     ##\n");
	ft_putstr(" '   ### *     * ##\n");
	ft_putstr("    ##     *   ###\n");
	ft_putstr("   ##  *    * ##\n");
	ft_putstr("  ##        ###\n");
	ft_putstr("  #   *  ####\n");
	ft_putstr("  #   ####\n");
	ft_putstr("  #####\n");
	ft_putstr("\nLook at this sweet cucumber. It's survived!!!");
	ft_putstr("\nDummy turtles stayed hungry :(");
}

void	print_win(char *name)
{
	ft_putstr("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	ft_putstr("X (*O*)    *           *         *       X\n");
	ft_putstr("X               *        (@^U^)        * X\n");
	ft_putstr("X (*O*) *   *       *   \\ _||_ /    *    X\n");
	ft_putstr("X                        (,,,,)          X\n");
	ft_putstr("X (*O*)     *    *       (,,,,)  *       X\n");
	ft_putstr("X                          ||         *  X\n");
	ft_putstr("X (*O*)     *    *      #######    *     X\n");
	ft_putstr("X        *              #     #      *   X\n");
	ft_putstr("X (*O*)           #######  1  #          X\n");
	ft_putstr("X           *     #     #     ########   X\n");
	ft_putstr("X (*O*)           #  2  #     #   3  #   X\n");
	ft_putstr("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	ft_putstr("\nWow look at the ");
	ft_putstr(name);
	ft_putstr(", is a faster turtle in world!\nNow ");
	ft_putstr(name);
	ft_putstr(" can enjoy the most delicious Cucumber! Congrats! ^_^\n");
}
