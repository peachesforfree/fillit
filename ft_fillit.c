/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 15:50:20 by mkim              #+#    #+#             */
/*   Updated: 2017/02/11 21:36:19 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_fillit(int piece, char **grid, int *arr, int n)
{
	ft_fillit1(piece, grid, arr, n);
	ft_fillit2(piece, grid, arr, n);
	ft_fillit3(piece, grid, arr, n);
	ft_fillit4(piece, grid, arr, n);
	ft_fillit5(piece, grid, arr, n);
	ft_fillit6(piece, grid, arr, n);
	ft_fillit7(piece, grid, arr, n);
}
