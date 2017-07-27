/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_it1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 20:49:53 by mkim              #+#    #+#             */
/*   Updated: 2017/03/16 21:32:14 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_delete_it6(int piece, char **grid, int x, int y)
{
	if (piece == 15)
	{
		grid[y][x] = '.';
		grid[y + 1][x] = '.';
		grid[y + 1][x + 1] = '.';
		grid[y + 1][x - 1] = '.';
	}
	if (piece == 16)
	{
		grid[y][x] = '.';
		grid[y + 1][x] = '.';
		grid[y + 1][x + 1] = '.';
		grid[y + 2][x] = '.';
	}
}

void	ft_delete_it7(int piece, char **grid, int x, int y)
{
	if (piece == 17)
	{
		grid[y][x] = '.';
		grid[y][x + 1] = '.';
		grid[y + 1][x + 1] = '.';
		grid[y + 1][x + 2] = '.';
	}
	if (piece == 18)
	{
		grid[y][x] = '.';
		grid[y + 1][x] = '.';
		grid[y + 1][x - 1] = '.';
		grid[y + 2][x - 1] = '.';
	}
}
