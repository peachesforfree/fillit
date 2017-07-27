/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_safe_loc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 19:44:54 by mkim              #+#    #+#             */
/*   Updated: 2017/03/16 19:42:38 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		is_safe_loc(int piece, char **grid, int *arr, int len)
{
	if (is_safe_loc1(piece, grid, arr, len) ||
	is_safe_loc2(piece, grid, arr, len) ||
	is_safe_loc3(piece, grid, arr, len) ||
	is_safe_loc4(piece, grid, arr, len) ||
	is_safe_loc5(piece, grid, arr, len) ||
	is_safe_loc6(piece, grid, arr, len) ||
	is_safe_loc7(piece, grid, arr, len))
		return (1);
	return (0);
}
