/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 15:38:35 by mkim              #+#    #+#             */
/*   Updated: 2017/01/12 21:55:26 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*mem;
	size_t	i;

	mem = (char *)malloc(sizeof(char) * size + 1);
	i = 0;
	if (!mem)
		return (0);
	while (i <= size)
	{
		mem[i] = '\0';
		i++;
	}
	return (mem);
}
