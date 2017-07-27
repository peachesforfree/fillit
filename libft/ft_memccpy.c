/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 13:52:37 by mkim              #+#    #+#             */
/*   Updated: 2017/01/12 21:23:29 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*csrc;
	unsigned char	*cdst;
	size_t			i;
	unsigned char	cc;

	csrc = (unsigned char *)src;
	cdst = (unsigned char *)dst;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
		if (cdst[i - 1] == cc)
			return (&cdst[i]);
	}
	return (NULL);
}
