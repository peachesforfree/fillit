/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 19:32:15 by mkim              #+#    #+#             */
/*   Updated: 2017/03/16 22:00:32 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char	**grid;
	int		len;
	int		*type;

	if (argc != 2)
		ft_putstr("usage:./fillit target_file\n");
	else if (argc == 2)
	{
		if (ft_checkinput(argv[1]) &&
				ft_countpieces(argv[1]) && ft_checkpat(argv[1]))
		{
			ERROR(type = ft_sortblocks(argv[1]));
			len = ft_calculate(type, 0);
			grid = ft_makegrid(len);
			while (!solve_tetrimino(type, grid, 0, len))
			{
				len++;
				grid = ft_makegrid(len);
			}
			ft_printgrid(grid);
		}
		else
			ft_putstr("error\n");
	}
	return (0);
}

void	ft_shift_left(char *buff)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < 3)
	{
		if (buff[i] == '.' && buff[i + 5] == '.' && buff[i + 10] == '.' &&
				buff[i + 15] == '.')
			j++;
		else
			break ;
		i++;
	}
	i = 0;
	while (buff[i] && j > 0)
	{
		if (buff[i] == '#')
		{
			buff[i] = '.';
			buff[i - j] = '#';
		}
		i++;
	}
}

void	ft_shift_up(char *buff)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < 3)
	{
		if (buff[i] == '.' && buff[i + 1] == '.' && buff[i + 2] == '.' &&
				buff[i + 3] == '.')
			j++;
		else
			break ;
		i += 5;
	}
	i = 0;
	while (buff[i] && j > 0)
	{
		if (buff[i] == '#')
		{
			buff[i] = '.';
			buff[i - j * 5] = '#';
		}
		i++;
	}
}
