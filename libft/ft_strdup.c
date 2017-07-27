/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 23:56:21 by mkim              #+#    #+#             */
/*   Updated: 2017/01/21 21:41:07 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*string;
	int		size;
	int		i;

	size = 0;
	i = 0;
	while (s1[size])
		size++;
	string = (char *)malloc(sizeof(char) * (size + 1));
	if (!string)
		return (NULL);
	while (i <= size)
	{
		string[i] = s1[i];
		i++;
	}
	string[size] = '\0';
	return (string);
}
