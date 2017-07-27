/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 23:26:04 by mkim              #+#    #+#             */
/*   Updated: 2017/01/14 19:14:34 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**mem;
	int		i;
	int		n;
	int		j;

	if (!s || !(mem = (char**)malloc(sizeof(char*) * ft_nwords(s, c) + 1)))
		return (NULL);
	i = 0;
	n = 0;
	while (i < ft_nwords(s, c))
	{
		j = 0;
		while (s[n] == c && s[n++])
			j = n;
		while (s[j] != c && s[j])
			j++;
		if (!(mem[i] = (char*)malloc(sizeof(char) * j + 1)))
			return (NULL);
		j = 0;
		while (s[n] != c && s[n])
			mem[i][j++] = s[n++];
		mem[i++][j] = '\0';
	}
	mem[i] = NULL;
	return (mem);
}
