/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printgrid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 19:48:43 by mkim              #+#    #+#             */
/*   Updated: 2017/03/16 19:41:20 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_printgrid(char **grid)
{
	int j;

	j = 0;
	while (grid[j])
	{
		ft_putstr(grid[j]);
		j++;
	}
}
