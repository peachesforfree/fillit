/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkim <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 20:02:51 by mkim              #+#    #+#             */
/*   Updated: 2017/03/16 20:36:40 by mkim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft/libft.h"
# define FILL(x) if ((x) == 42) {return (1);}
# define ERROR(x) if ((x) == NULL) {ft_putstr("error\n"); return (0);}
# define BUF_SIZE 4096

int				main(int argc, char **argv);
int				ft_checkinput(char *str);
int				ft_countpieces(char *str);
int				ft_checkpat(char *str);
void			ft_shift_left(char *buff);
void			ft_shift_up(char *buff);
char			**template_pieces(void);
int				compare_pieces(char *buff, char **block);
int				*ft_sortblocks(char *str);
int				solve_tetrimino(int *block, char **grid, int n, int len);
int				ft_calculate(int *block, int n);
char			**ft_makegrid(int n);
void			ft_printgrid(char **grid);
int				is_safe_loc(int piece, char **grid, int *arr, int len);
void			ft_fillit(int piece, char **grid, int *arr, int n);
void			ft_fillit1(int piece, char **grid, int *arr, int n);
void			ft_fillit2(int piece, char **grid, int *arr, int n);
void			ft_fillit3(int piece, char **grid, int *arr, int n);
void			ft_fillit4(int piece, char **grid, int *arr, int n);
void			ft_fillit5(int piece, char **grid, int *arr, int n);
void			ft_fillit6(int piece, char **grid, int *arr, int n);
void			ft_fillit7(int piece, char **grid, int *arr, int n);
void			ft_delete(int piece, char **grid, int x, int y);
void			ft_delete_it1(int piece, char **grid, int x, int y);
void			ft_delete_it2(int piece, char **grid, int x, int y);
void			ft_delete_it3(int piece, char **grid, int x, int y);
void			ft_delete_it4(int piece, char **grid, int x, int y);
void			ft_delete_it5(int piece, char **grid, int x, int y);
void			ft_delete_it6(int piece, char **grid, int x, int y);
void			ft_delete_it7(int piece, char **grid, int x, int y);
int				is_safe_loc1(int piece, char **grid, int *arr, int len);
int				is_safe_loc2(int piece, char **grid, int *arr, int len);
int				is_safe_loc3(int piece, char **grid, int *arr, int len);
int				is_safe_loc4(int piece, char **grid, int *arr, int len);
int				is_safe_loc5(int piece, char **grid, int *arr, int len);
int				is_safe_loc6(int piece, char **grid, int *arr, int len);
int				is_safe_loc7(int piece, char **grid, int *arr, int len);

#endif
