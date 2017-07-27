/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 23:15:28 by mkim              #+#    #+#             */
/*   Updated: 2017/01/13 17:32:55 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t d_size;
	size_t s_size;

	i = 0;
	d_size = ft_strlen(dst);
	s_size = ft_strlen(src);
	if (size < d_size + 1)
	{
		return (size + s_size);
	}
	while (src[i] && ((d_size + i) < (size - 1)))
	{
		dst[d_size + i] = src[i];
		i++;
	}
	dst[d_size + i] = '\0';
	return (d_size + s_size);
}
