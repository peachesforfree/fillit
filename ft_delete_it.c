/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_it.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 19:12:16 by mkim              #+#    #+#             */
/*   Updated: 2017/03/16 21:31:31 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_delete_it1(int piece, char **grid, int x, int y)
{
	if (piece == 0)
	{
		grid[y][x] = '.';
		grid[y][x + 1] = '.';
		grid[y + 1][x] = '.';
		grid[y + 1][x + 1] = '.';
	}
	if (piece == 1)
	{
		grid[y][x] = '.';
		grid[y][x + 1] = '.';
		grid[y][x + 2] = '.';
		grid[y][x + 3] = '.';
	}
	if (piece == 2)
	{
		grid[y][x] = '.';
		grid[y + 1][x] = '.';
		grid[y + 2][x] = '.';
		grid[y + 3][x] = '.';
	}
}

void	ft_delete_it2(int piece, char **grid, int x, int y)
{
	if (piece == 3)
	{
		grid[y][x] = '.';
		grid[y][x + 1] = '.';
		grid[y][x + 2] = '.';
		grid[y + 1][x + 2] = '.';
	}
	if (piece == 4)
	{
		grid[y][x] = '.';
		grid[y + 1][x] = '.';
		grid[y + 2][x] = '.';
		grid[y + 2][x - 1] = '.';
	}
	if (piece == 5)
	{
		grid[y][x] = '.';
		grid[y + 1][x] = '.';
		grid[y + 1][x + 1] = '.';
		grid[y + 1][x + 2] = '.';
	}
}

void	ft_delete_it3(int piece, char **grid, int x, int y)
{
	if (piece == 6)
	{
		grid[y][x] = '.';
		grid[y][x + 1] = '.';
		grid[y + 1][x] = '.';
		grid[y + 2][x] = '.';
	}
	if (piece == 7)
	{
		grid[y][x] = '.';
		grid[y][x + 1] = '.';
		grid[y][x + 2] = '.';
		grid[y + 1][x] = '.';
	}
	if (piece == 8)
	{
		grid[y][x] = '.';
		grid[y][x + 1] = '.';
		grid[y + 1][x + 1] = '.';
		grid[y + 2][x + 1] = '.';
	}
}

void	ft_delete_it4(int piece, char **grid, int x, int y)
{
	if (piece == 9)
	{
		grid[y][x] = '.';
		grid[y + 1][x] = '.';
		grid[y + 1][x - 1] = '.';
		grid[y + 1][x - 2] = '.';
	}
	if (piece == 10)
	{
		grid[y][x] = '.';
		grid[y + 1][x] = '.';
		grid[y + 2][x] = '.';
		grid[y + 2][x + 1] = '.';
	}
	if (piece == 11)
	{
		grid[y][x] = '.';
		grid[y][x + 1] = '.';
		grid[y + 1][x] = '.';
		grid[y + 1][x - 1] = '.';
	}
}

void	ft_delete_it5(int piece, char **grid, int x, int y)
{
	if (piece == 12)
	{
		grid[y][x] = '.';
		grid[y + 1][x] = '.';
		grid[y + 1][x + 1] = '.';
		grid[y + 2][x + 1] = '.';
	}
	if (piece == 13)
	{
		grid[y][x] = '.';
		grid[y][x + 1] = '.';
		grid[y][x + 2] = '.';
		grid[y + 1][x + 1] = '.';
	}
	if (piece == 14)
	{
		grid[y][x] = '.';
		grid[y + 1][x] = '.';
		grid[y + 2][x] = '.';
		grid[y + 1][x - 1] = '.';
	}
}
