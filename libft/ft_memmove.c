/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 21:15:57 by mkim              #+#    #+#             */
/*   Updated: 2017/01/12 21:16:07 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	const unsigned char *csrc;
	unsigned char		*cdst;

	i = 0;
	csrc = src;
	cdst = dst;
	if (cdst < csrc)
	{
		while (i < len)
		{
			cdst[i] = csrc[i];
			i++;
		}
	}
	else if (cdst > csrc)
	{
		i = len;
		while (i > 0)
		{
			cdst[i - 1] = csrc[i - 1];
			--i;
		}
	}
	return (dst);
}
