/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 20:28:15 by mkim              #+#    #+#             */
/*   Updated: 2017/01/14 18:43:33 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*mem;
	int				len;
	unsigned int	nb;
	int				i;

	len = 1;
	nb = (unsigned int)n;
	i = n;
	while (i /= 10)
		len++;
	if (n < 0)
		len++;
	if (!(mem = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (n < 0)
	{
		mem[0] = '-';
		nb = -nb;
	}
	mem[len] = '\0';
	mem[--len] = (nb % 10) + '0';
	while (nb /= 10)
		mem[--len] = (nb % 10) + '0';
	return (mem);
}
