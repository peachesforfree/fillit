/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_tetrimino.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 20:35:29 by mkim              #+#    #+#             */
/*   Updated: 2017/03/16 19:36:58 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	solve_tetrimino(int *block, char **grid, int n, int len)
{
	int j;
	int *arr;

	arr = (int*)malloc(sizeof(int) * 2);
	arr[0] = -1;
	FILL(block[n]);
	while (++arr[0] < len)
	{
		j = -1;
		while (++j < len)
		{
			if (grid[arr[0]][j] == '.')
			{
				arr[1] = j;
				if (is_safe_loc(block[n], grid, arr, len))
				{
					ft_fillit(block[n], grid, arr, n);
					if (solve_tetrimino(block, grid, n + 1, len))
						return (1);
					ft_delete(block[n], grid, j, arr[0]);
				}
			}
		}
	}
	return (0);
}
