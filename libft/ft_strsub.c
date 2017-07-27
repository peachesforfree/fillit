/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 15:58:11 by mkim              #+#    #+#             */
/*   Updated: 2017/01/12 21:56:22 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*mem;
	size_t	i;

	if (!s)
		return (0);
	mem = (char *)malloc(sizeof(char) * len + 1);
	if (!mem)
		return (0);
	i = 0;
	while (s[start])
	{
		mem[i] = s[start];
		i++;
		start++;
	}
	mem[len] = '\0';
	return (mem);
}
