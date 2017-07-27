/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_safe_loc2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 18:16:01 by mkim              #+#    #+#             */
/*   Updated: 2017/02/15 18:27:03 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		is_safe_loc6(int piece, char **grid, int *arr, int len)
{
	if (piece == 15)
	{
		if ((arr[0] + 1 < len && arr[1] + 1 < len && arr[1] - 1 >= 0) &&
				grid[arr[0] + 1][arr[1]] == '.' &&
				grid[arr[0] + 1][arr[1] + 1] == '.' &&
				grid[arr[0] + 1][arr[1] - 1] == '.')
			return (1);
	}
	if (piece == 16)
	{
		if ((arr[0] + 2 < len && arr[1] + 1 < len) &&
				grid[arr[0] + 1][arr[1]] == '.' &&
				grid[arr[0] + 1][arr[1] + 1] == '.' &&
				grid[arr[0] + 2][arr[1]] == '.')
			return (1);
	}
	return (0);
}

int		is_safe_loc7(int piece, char **grid, int *arr, int len)
{
	if (piece == 17)
	{
		if ((arr[0] + 1 < len && arr[1] + 2 < len) &&
				grid[arr[0]][arr[1] + 1] == '.' &&
				grid[arr[0] + 1][arr[1] + 1] == '.' &&
				grid[arr[0] + 1][arr[1] + 2] == '.')
			return (1);
	}
	if (piece == 18)
	{
		if ((arr[0] + 2 < len && arr[1] - 1 >= 0) &&
				grid[arr[0] + 1][arr[1]] == '.' &&
				grid[arr[0] + 1][arr[1] - 1] == '.' &&
				grid[arr[0] + 2][arr[1] - 1] == '.')
			return (1);
	}
	return (0);
}
