/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 15:57:13 by mkim              #+#    #+#             */
/*   Updated: 2017/01/12 21:29:36 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int size;
	int i;

	size = 0;
	i = 0;
	while (src[size])
		size++;
	while (i <= size)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
