/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 22:25:57 by mkim              #+#    #+#             */
/*   Updated: 2017/01/12 22:28:03 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*mem;
	size_t	i;
	size_t	j;
	size_t	n;

	if (!s)
		return (0);
	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (!s[i])
		return (ft_strnew(0));
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	mem = (char *)malloc(sizeof(char) * (j - i + 2));
	n = 0;
	if (!mem)
		return (0);
	while (i <= j)
		mem[n++] = s[i++];
	mem[n] = '\0';
	return (mem);
}
