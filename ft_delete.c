/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 23:55:19 by mkim              #+#    #+#             */
/*   Updated: 2017/02/15 19:32:30 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_delete(int piece, char **grid, int x, int y)
{
	ft_delete_it1(piece, grid, x, y);
	ft_delete_it2(piece, grid, x, y);
	ft_delete_it3(piece, grid, x, y);
	ft_delete_it4(piece, grid, x, y);
	ft_delete_it5(piece, grid, x, y);
	ft_delete_it6(piece, grid, x, y);
	ft_delete_it7(piece, grid, x, y);
}
