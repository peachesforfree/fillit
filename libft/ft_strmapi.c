/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 22:36:06 by mkim              #+#    #+#             */
/*   Updated: 2017/01/12 22:06:41 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mem;
	unsigned int	i;

	if (!s || !f)
		return (0);
	mem = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	i = 0;
	if (!mem)
		return (0);
	while (s[i])
	{
		mem[i] = f(i, ((char)s[i]));
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
