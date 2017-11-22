/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 19:19:48 by mwingrov          #+#    #+#             */
/*   Updated: 2017/11/22 14:22:24 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			draw1(t_env z, char *filename)
{
	double		**res;
	int			i;
	int			j;

	i = 0;
	res = two_arr(filename);
	while (i < z.size.y)
	{
		j = 0;
		while (j < z.size.x)
		{
			z.new_map[i][j].x = ((j * 10) - (i * 10)) + 500;
			z.new_map[i][j].y = ((j * 20) + (i * 20) + 50) / 2;
			if (res[i][j] > 0)
			{
				z.new_map[i][j].y = z.new_map[i][j].y - res[i][j] * 5;
			}
			mlx_pixel_put(z.mlx, z.win, z.new_map[i][j].x,
					z.new_map[i][j].y, 0x00FFFFFF);
			j++;
		}
		i++;
	}
}

void			draw2(t_env z)
{
	int			i;
	int			j;

	i = 0;
	while (i < z.size.y)
	{
		j = 0;
		while (j < z.size.x - 1)
		{
			d_line(z.mlx, z.win, z.new_map[i][j], z.new_map[i][j + 1]);
			j++;
		}
		i++;
	}
	i = 0;
	while (i < z.size.y - 1)
	{
		j = 0;
		while (j < z.size.x)
		{
			d_line(z.mlx, z.win, z.new_map[i + 1][j], z.new_map[i][j]);
			j++;
		}
		i++;
	}
}

int				main(int ac, char **av)
{
	int			i;
	t_env		z;

	if (ac == 2)
	{
		i = 0;
		z.size = get_xy(av[1]);
		z.new_map = (t_coo **)malloc(sizeof(t_coo *) * z.size.y);
		z.mlx = mlx_init();
		z.win = mlx_new_window(z.mlx, WINX, WINY, "FDF");
		while (i < z.size.y)
		{
			z.new_map[i] = (t_coo *)malloc(sizeof(t_coo) * z.size.x);
			i++;
		}
		draw1(z, av[1]);
		draw2(z);
		mlx_key_hook(z.win, my_key_funct, 0);
		mlx_loop(z.mlx);
	}
	else
		ft_putstr("Error!!!!! Please insert one argument.\n");
	return (0);
}
