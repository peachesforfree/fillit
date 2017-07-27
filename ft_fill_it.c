/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_it.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 00:05:51 by mkim              #+#    #+#             */
/*   Updated: 2017/03/16 20:57:55 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_fillit1(int piece, char **grid, int *arr, int n)
{
	if (piece == 0)
	{
		grid[arr[0]][arr[1]] = 'A' + n;
		grid[arr[0]][arr[1] + 1] = 'A' + n;
		grid[arr[0] + 1][arr[1]] = 'A' + n;
		grid[arr[0] + 1][arr[1] + 1] = 'A' + n;
	}
	if (piece == 1)
	{
		grid[arr[0]][arr[1]] = 'A' + n;
		grid[arr[0]][arr[1] + 1] = 'A' + n;
		grid[arr[0]][arr[1] + 2] = 'A' + n;
		grid[arr[0]][arr[1] + 3] = 'A' + n;
	}
	if (piece == 2)
	{
		grid[arr[0]][arr[1]] = 'A' + n;
		grid[arr[0] + 1][arr[1]] = 'A' + n;
		grid[arr[0] + 2][arr[1]] = 'A' + n;
		grid[arr[0] + 3][arr[1]] = 'A' + n;
	}
}

void	ft_fillit2(int piece, char **grid, int *arr, int n)
{
	if (piece == 3)
	{
		grid[arr[0]][arr[1]] = 65 + n;
		grid[arr[0]][arr[1] + 1] = 65 + n;
		grid[arr[0]][arr[1] + 2] = 65 + n;
		grid[arr[0] + 1][arr[1] + 2] = 65 + n;
	}
	if (piece == 4)
	{
		grid[arr[0]][arr[1]] = 'A' + n;
		grid[arr[0] + 1][arr[1]] = 'A' + n;
		grid[arr[0] + 2][arr[1]] = 'A' + n;
		grid[arr[0] + 2][arr[1] - 1] = 'A' + n;
	}
	if (piece == 5)
	{
		grid[arr[0]][arr[1]] = 'A' + n;
		grid[arr[0] + 1][arr[1]] = 'A' + n;
		grid[arr[0] + 1][arr[1] + 1] = 'A' + n;
		grid[arr[0] + 1][arr[1] + 2] = 'A' + n;
	}
}

void	ft_fillit3(int piece, char **grid, int *arr, int n)
{
	if (piece == 6)
	{
		grid[arr[0]][arr[1]] = 'A' + n;
		grid[arr[0]][arr[1] + 1] = 'A' + n;
		grid[arr[0] + 1][arr[1]] = 'A' + n;
		grid[arr[0] + 2][arr[1]] = 'A' + n;
	}
	if (piece == 7)
	{
		grid[arr[0]][arr[1]] = 'A' + n;
		grid[arr[0]][arr[1] + 1] = 'A' + n;
		grid[arr[0]][arr[1] + 2] = 'A' + n;
		grid[arr[0] + 1][arr[1]] = 'A' + n;
	}
	if (piece == 8)
	{
		grid[arr[0]][arr[1]] = 'A' + n;
		grid[arr[0]][arr[1] + 1] = 'A' + n;
		grid[arr[0] + 1][arr[1] + 1] = 'A' + n;
		grid[arr[0] + 2][arr[1] + 1] = 'A' + n;
	}
}

void	ft_fillit4(int piece, char **grid, int *arr, int n)
{
	if (piece == 9)
	{
		grid[arr[0]][arr[1]] = 'A' + n;
		grid[arr[0] + 1][arr[1]] = 'A' + n;
		grid[arr[0] + 1][arr[1] - 1] = 'A' + n;
		grid[arr[0] + 1][arr[1] - 2] = 'A' + n;
	}
	if (piece == 10)
	{
		grid[arr[0]][arr[1]] = 'A' + n;
		grid[arr[0] + 1][arr[1]] = 'A' + n;
		grid[arr[0] + 2][arr[1]] = 'A' + n;
		grid[arr[0] + 2][arr[1] + 1] = 'A' + n;
	}
	if (piece == 11)
	{
		grid[arr[0]][arr[1]] = 'A' + n;
		grid[arr[0]][arr[1] + 1] = 'A' + n;
		grid[arr[0] + 1][arr[1]] = 'A' + n;
		grid[arr[0] + 1][arr[1] - 1] = 'A' + n;
	}
}

void	ft_fillit5(int piece, char **grid, int *arr, int n)
{
	if (piece == 12)
	{
		grid[arr[0]][arr[1]] = 'A' + n;
		grid[arr[0] + 1][arr[1]] = 'A' + n;
		grid[arr[0] + 1][arr[1] + 1] = 'A' + n;
		grid[arr[0] + 2][arr[1] + 1] = 'A' + n;
	}
	if (piece == 13)
	{
		grid[arr[0]][arr[1]] = 'A' + n;
		grid[arr[0]][arr[1] + 1] = 'A' + n;
		grid[arr[0]][arr[1] + 2] = 'A' + n;
		grid[arr[0] + 1][arr[1] + 1] = 'A' + n;
	}
	if (piece == 14)
	{
		grid[arr[0]][arr[1]] = 'A' + n;
		grid[arr[0] + 1][arr[1]] = 'A' + n;
		grid[arr[0] + 2][arr[1]] = 'A' + n;
		grid[arr[0] + 1][arr[1] - 1] = 'A' + n;
	}
}
