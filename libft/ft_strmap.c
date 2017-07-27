/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 22:21:08 by mkim              #+#    #+#             */
/*   Updated: 2017/01/12 22:09:23 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*mem;
	int		i;

	if (!s || !f)
		return (0);
	mem = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!mem)
		return (0);
	i = 0;
	while (s[i])
	{
		mem[i] = f((char)s[i]);
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
