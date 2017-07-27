/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_it1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 02:16:29 by mkim              #+#    #+#             */
/*   Updated: 2017/03/16 21:28:26 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_fillit6(int piece, char **grid, int *arr, int n)
{
	if (piece == 15)
	{
		grid[arr[0]][arr[1]] = 'A' + n;
		grid[arr[0] + 1][arr[1]] = 'A' + n;
		grid[arr[0] + 1][arr[1] + 1] = 'A' + n;
		grid[arr[0] + 1][arr[1] - 1] = 'A' + n;
	}
	if (piece == 16)
	{
		grid[arr[0]][arr[1]] = 'A' + n;
		grid[arr[0] + 1][arr[1]] = 'A' + n;
		grid[arr[0] + 1][arr[1] + 1] = 'A' + n;
		grid[arr[0] + 2][arr[1]] = 'A' + n;
	}
}

void	ft_fillit7(int piece, char **grid, int *arr, int n)
{
	if (piece == 17)
	{
		grid[arr[0]][arr[1]] = 'A' + n;
		grid[arr[0]][arr[1] + 1] = 'A' + n;
		grid[arr[0] + 1][arr[1] + 1] = 'A' + n;
		grid[arr[0] + 1][arr[1] + 2] = 'A' + n;
	}
	if (piece == 18)
	{
		grid[arr[0]][arr[1]] = 'A' + n;
		grid[arr[0] + 1][arr[1]] = 'A' + n;
		grid[arr[0] + 1][arr[1] - 1] = 'A' + n;
		grid[arr[0] + 2][arr[1] - 1] = 'A' + n;
	}
}
