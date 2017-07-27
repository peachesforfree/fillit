/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 17:19:31 by mkim              #+#    #+#             */
/*   Updated: 2017/01/12 22:04:16 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;
	int		i;
	int		size;

	if (!s1 || !s2)
		return (0);
	mem = (char *)malloc(20 + 1);
	if (!mem)
		return (0);
	i = 0;
	size = 0;
	while (s1[size] != '\0')
	{
		mem[size] = s1[size];
		size++;
	}
	while (s2[i] != '\0')
	{
		mem[size + i] = s2[i];
		i++;
	}
	mem[size + i] = '\0';
	return (mem);
}
