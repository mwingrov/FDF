/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 19:23:00 by mwingrov          #+#    #+#             */
/*   Updated: 2017/11/22 14:32:15 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# define WINX 1084
# define WINY 800

# include <stdlib.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# include <math.h>
# include <mlx.h>
# include "get_next_line.h"
# include "libft/libft.h"

typedef struct		s_coo
{
	double				x;
	double				y;
	int					i;
}					t_coo;

typedef struct		s_sizexy
{
	int				x;
	int				y;
	int				fd;
	int				i;
	int				j;
	int				index;
}					t_sizexy;

typedef struct		s_delta
{
	double			x;
	double			y;
}					t_delta;

typedef struct		s_move
{
	double			x;
	double			y;
}					t_move;

typedef struct		s_vector
{
	t_move			mv;
	t_delta			d;
}					t_vector;

typedef struct		s_env
{
	void			*mlx;
	void			*win;
	double			p0;
	double			p1;
	double			cnt;
	int				x1;
	int				y1;
	double			x;
	double			y;
	int				z;
	double			d;
	t_sizexy		size;
	double			row;
	double			col;
	t_coo			**new_map;
}					t_env;

void				d_line(void *mlx, void *win, t_coo p0, t_coo p1);
double				**alloc_sp(t_sizexy z);
t_sizexy			get_xy(char *filename);
double				**two_arr(char *filename);
int					my_key_funct(int keycode);

#endif
