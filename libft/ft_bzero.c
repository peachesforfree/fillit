/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 17:34:26 by mkim              #+#    #+#             */
/*   Updated: 2017/01/12 21:27:17 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*b;
	size_t	i;

	b = (char *)s;
	i = 0;
	while (i < n)
	{
		b[i] = 0;
		i++;
	}
}
