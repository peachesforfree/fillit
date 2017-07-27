/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 19:18:34 by mkim              #+#    #+#             */
/*   Updated: 2017/01/13 15:52:12 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;
	size_t	n;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len)
	{
		j = 0;
		n = i;
		while (big[n] == little[j] && n < len)
		{
			n++;
			j++;
			if (little[j] == '\0')
				return ((char *)(&big[i]));
		}
		if (big[i] == '\0')
			return (NULL);
		i++;
	}
	return (NULL);
}
