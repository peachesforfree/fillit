/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortblocks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 14:30:28 by mkim              #+#    #+#             */
/*   Updated: 2017/03/16 18:37:13 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*ft_sortblocks(char *str)
{
	int		fd;
	int		ret;
	int		*block;
	char	buff[BUF_SIZE];
	int		i;

	i = 0;
	fd = open(str, O_RDONLY);
	block = (int*)malloc(sizeof(int) * 27);
	while ((ret = read(fd, buff, 20)))
	{
		buff[ret] = '\0';
		ft_shift_left(buff);
		ft_shift_up(buff);
		if ((block[i] = compare_pieces(buff, template_pieces())) == -1)
		{
			free(block);
			return (NULL);
		}
		ret = read(fd, buff, 1);
		i++;
	}
	block[i] = 42;
	close(fd);
	return (block);
}
