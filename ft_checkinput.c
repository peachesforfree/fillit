/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkinput.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 17:38:42 by mkim              #+#    #+#             */
/*   Updated: 2017/03/16 22:03:46 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				ft_checkinput(char *str)
{
	char	buff[BUF_SIZE];
	int		fd;
	int		ret;
	int		i;
	int		j;

	fd = open(str, O_RDONLY);
	i = 42;
	while ((ret = read(fd, buff, 20)))
	{
		if (ret != 20)
			return (0);
		buff[ret] = '\0';
		i = 0;
		j = 4;
		ret = read(fd, buff, 1);
		if (ret == 1 && buff[0] != '\n')
			return (0);
		j = ret;
	}
	if (j != 0 || i == 42)
		return (0);
	close(fd);
	return (1);
}

int				ft_countpieces(char *str)
{
	char	buff[BUF_SIZE];
	int		fd;
	int		ret;
	int		i;
	int		n;

	fd = open(str, O_RDONLY);
	while ((ret = read(fd, buff, 20)))
	{
		buff[ret] = '\0';
		i = 0;
		n = 0;
		while (buff[i])
		{
			if (buff[i] == '#')
				n++;
			i++;
		}
		if (n != 4)
			return (0);
		ret = read(fd, buff, 1);
	}
	close(fd);
	return (1);
}

int				ft_checkpat(char *str)
{
	char	buff[BUF_SIZE];
	int		fd;
	int		ret;
	int		i;

	fd = open(str, O_RDONLY);
	while ((ret = read(fd, buff, 20)))
	{
		buff[ret] = '\0';
		i = 0;
		while (buff[i])
		{
			if (buff[i] == '#')
			{
				if (buff[i + 5] != '#' && buff[i - 1] != '#' &&
						buff[i + 1] != '#' && buff[i - 5] != '#')
					return (0);
			}
			i++;
		}
		ret = read(fd, buff, 1);
	}
	close(fd);
	return (1);
}
