/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template_pieces.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 18:58:02 by mkim              #+#    #+#             */
/*   Updated: 2017/03/16 22:01:15 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**template_pieces(void)
{
	char	**piece;

	piece = (char**)malloc(sizeof(char*) * 20);
	piece[0] = "##..\n##..\n....\n....\n";
	piece[1] = "####\n....\n....\n....\n";
	piece[2] = "#...\n#...\n#...\n#...\n";
	piece[3] = "###.\n..#.\n....\n....\n";
	piece[4] = ".#..\n.#..\n##..\n....\n";
	piece[5] = "#...\n###.\n....\n....\n";
	piece[6] = "##..\n#...\n#...\n....\n";
	piece[7] = "###.\n#...\n....\n....\n";
	piece[8] = "##..\n.#..\n.#..\n....\n";
	piece[9] = "..#.\n###.\n....\n....\n";
	piece[10] = "#...\n#...\n##..\n....\n";
	piece[11] = ".##.\n##..\n....\n....\n";
	piece[12] = "#...\n##..\n.#..\n....\n";
	piece[13] = "###.\n.#..\n....\n....\n";
	piece[14] = ".#..\n##..\n.#..\n....\n";
	piece[15] = ".#..\n###.\n....\n....\n";
	piece[16] = "#...\n##..\n#...\n....\n";
	piece[17] = "##..\n.##.\n....\n....\n";
	piece[18] = ".#..\n##..\n#...\n....\n";
	piece[19] = NULL;
	return (piece);
}

int		compare_pieces(char *buff, char **block)
{
	int	i;

	i = 0;
	while (block[i])
	{
		if (ft_strcmp(block[i], buff) == 0)
			return (i);
		i++;
	}
	return (-1);
}
