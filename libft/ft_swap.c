/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 21:39:11 by mkim              #+#    #+#             */
/*   Updated: 2017/01/18 15:16:59 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(int **x, int **y)
{
	int *temp;

	temp = NULL;
	temp = *x;
	*x = *y;
	*y = temp;
}
