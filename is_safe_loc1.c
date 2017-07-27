/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_safe_loc1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 22:01:19 by mkim              #+#    #+#             */
/*   Updated: 2017/03/16 21:51:39 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		is_safe_loc1(int piece, char **grid, int *arr, int len)
{
	if (piece == 0)
	{
		if ((arr[0] + 1 < len && arr[1] + 1 < len) &&
				(grid[arr[0]][arr[1] + 1] == '.' &&
				grid[arr[0] + 1][arr[1]] == '.'
				&& grid[arr[0] + 1][arr[1] + 1] == '.'))
			return (1);
	}
	if (piece == 1)
	{
		if (arr[1] + 3 < len && grid[arr[0]][arr[1] + 1] == '.' &&
					grid[arr[0]][arr[1] + 2] == '.' &&
					grid[arr[0]][arr[1] + 3] == '.')
			return (1);
	}
	if (piece == 2)
	{
		if (arr[0] + 3 < len && grid[arr[0] + 1][arr[1]] == '.' &&
				grid[arr[0] + 2][arr[1]] == '.' &&
				grid[arr[0] + 3][arr[1]] == '.')
			return (1);
	}
	return (0);
}

int		is_safe_loc2(int piece, char **grid, int *arr, int len)
{
	if (piece == 3)
	{
		if ((arr[0] + 1 < len && arr[1] + 2 < len) &&
				grid[arr[0]][arr[1] + 1] == '.' &&
				grid[arr[0]][arr[1] + 2] == '.' &&
				grid[arr[0] + 1][arr[1] + 2] == '.')
			return (1);
	}
	if (piece == 4)
	{
		if ((arr[0] + 2 < len && arr[1] - 1 >= 0) &&
				grid[arr[0] + 1][arr[1]] == '.' &&
				grid[arr[0] + 2][arr[1]] == '.' &&
				grid[arr[0] + 2][arr[1] - 1] == '.')
			return (1);
	}
	if (piece == 5)
	{
		if ((arr[0] + 1 < len && arr[1] + 1 < len) &&
				grid[arr[0] + 1][arr[1]] == '.' &&
				grid[arr[0] + 1][arr[1] + 1] == '.' &&
				grid[arr[0] + 1][arr[1] + 2] == '.')
			return (1);
	}
	return (0);
}

int		is_safe_loc3(int piece, char **grid, int *arr, int len)
{
	if (piece == 6)
	{
		if ((arr[0] + 2 < len && arr[1] + 1 < len) &&
				grid[arr[0]][arr[1] + 1] == '.' &&
				grid[arr[0] + 1][arr[1]] == '.' &&
				grid[arr[0] + 2][arr[1]] == '.')
			return (1);
	}
	if (piece == 7)
	{
		if ((arr[0] + 1 < len && arr[1] + 2 < len) &&
				grid[arr[0]][arr[1] + 1] == '.' &&
				grid[arr[0]][arr[1] + 2] == '.' &&
				grid[arr[0] + 1][arr[1]] == '.')
			return (1);
	}
	if (piece == 8)
	{
		if ((arr[0] + 2 < len && arr[1] + 1 < len) &&
				grid[arr[0]][arr[1] + 1] == '.' &&
				grid[arr[0] + 1][arr[1] + 1] == '.' &&
				grid[arr[0] + 2][arr[1] + 1] == '.')
			return (1);
	}
	return (0);
}

int		is_safe_loc4(int piece, char **grid, int *arr, int len)
{
	if (piece == 9)
	{
		if ((arr[0] + 1 < len && arr[1] - 2 >= 0) &&
				grid[arr[0] + 1][arr[1]] == '.' &&
				grid[arr[0] + 1][arr[1] - 1] == '.' &&
				grid[arr[0] + 1][arr[1] - 2] == '.')
			return (1);
	}
	if (piece == 10)
	{
		if ((arr[0] + 2 < len && arr[1] + 1 < len) &&
				grid[arr[0] + 1][arr[1]] == '.' &&
				grid[arr[0] + 2][arr[1]] == '.' &&
				grid[arr[0] + 2][arr[1] + 1] == '.')
			return (1);
	}
	if (piece == 11)
	{
		if ((arr[0] + 1 < len && arr[1] + 1 < len && (arr[1] - 1) >= 0) &&
				grid[arr[0]][arr[1] + 1] == '.' &&
				grid[arr[0] + 1][arr[1]] == '.' &&
				grid[arr[0] + 1][arr[1] - 1] == '.')
			return (1);
	}
	return (0);
}

int		is_safe_loc5(int piece, char **grid, int *arr, int len)
{
	if (piece == 12)
	{
		if ((arr[0] + 2 < len && arr[1] + 1 < len) &&
				grid[arr[0] + 1][arr[1]] == '.' &&
				grid[arr[0] + 1][arr[1] + 1] == '.' &&
				grid[arr[0] + 2][arr[1] + 1] == '.')
			return (1);
	}
	if (piece == 13)
	{
		if ((arr[0] + 1 < len && arr[1] + 1 < len) &&
				grid[arr[0]][arr[1] + 1] == '.' &&
				grid[arr[0]][arr[1] + 2] == '.' &&
				grid[arr[0] + 1][arr[1] + 1] == '.')
			return (1);
	}
	if (piece == 14)
	{
		if ((arr[0] + 2 < len && arr[1] - 1 >= 0) &&
				grid[arr[0] + 1][arr[1]] == '.' &&
				grid[arr[0] + 2][arr[1]] == '.' &&
				grid[arr[0] + 1][arr[1] - 1] == '.')
			return (1);
	}
	return (0);
}
