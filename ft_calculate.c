/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 23:53:40 by mkim              #+#    #+#             */
/*   Updated: 2017/02/15 20:22:15 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_calculate(int *block, int n)
{
	while (block[n] != 42)
		n++;
	if (n == 1)
		return (2);
	else if (n == 2)
		return (3);
	else if (n <= 4)
		return (4);
	else if (n <= 6)
		return (5);
	else if (n <= 9)
		return (6);
	else if (n <= 12)
		return (7);
	else if (n <= 16)
		return (8);
	else if (n <= 20)
		return (9);
	else if (n <= 25)
		return (10);
	else if (n == 26)
		return (11);
	return (0);
}

char	**ft_makegrid(int n)
{
	char	**grid;
	int		i;
	int		j;

	j = 0;
	grid = (char**)malloc(sizeof(grid) * (n + 1));
	grid[n] = NULL;
	while (j < n)
	{
		i = 0;
		grid[j] = (char*)malloc(sizeof(char) * n + 2);
		grid[j][n] = '\n';
		grid[j][n + 1] = '\0';
		while (grid[j][i] != '\n')
		{
			grid[j][i] = '.';
			i++;
		}
		j++;
	}
	return (grid);
}
