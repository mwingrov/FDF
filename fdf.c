/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 14:45:44 by mwingrov          #+#    #+#             */
/*   Updated: 2017/07/02 18:28:29 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdlib.h>
#include "includes/fdf.h"
#include <math.h>
#include "includes/get_next_line.h"

int		key_event(int	keycode, void	*param)
{
	if (keycode == 53)
	{
		exit(0);
	}
	return (0);
}

void	line(void *mlx, void *win, t_point p0, t_point p1)
{
	double	crawl;
	delta	d;
	move	mv;
	t_point	cnt;
	int		i;

	if ((d.x = p1.x - p0.x) > (d.y = p1.y - p0.y))
		crawl = fabs(d.x);
	else
		crawl = fabs(d.y);
	mv.x = d.x / crawl;
	mv.y = d.y / crawl;
	cnt.x = p0.x;
	cnt.y = p0.y;
	i = 0;
	while (i < crawl)
	{
		cnt.x = cnt.x + mv.x;
		cnt.y = cnt.y + mv.y;
		mlx_pixel_put(mlx, win,(int)cnt.x - (int)cnt.y, ((int)cnt.x + (int)cnt.y) / 2, 0x00FFFFFF);
		i++;
	}
}

int	main()
{
	delta		*dots;
	t_point		p0;
	t_point1	p1;
	int			loop;
	int			x;
	int			line;
	int			mp_points;
	double		temp;

	mp_points = read_line(&dots);
	env.mlx = mlx_init();
	env.win = mlx_new_window(env.mlx, 1000, 1000, "My Fdf");
	x = -1;
	while (++x < num_points)
	{
		temp = dots[b].x;
		dots[x].x = 400 + dots[x].x * 30 - dots[x].y * 30;
		dots[x].y = (300 + dots[x].y * 30 + (temp * 30) / 2);
		if (dots[x].z > 0)
			dots[x].y = dots[x].y - dots[x].z * 30;
		else
			dots[x].y = dots[x].y + dots[x].z * 30;
		p0.x = dots[x].x;
		p0.y = dots[x].y;
		p1.x = dots[x].x;
		p1.y = dots[x].y;
		mlx_pixel_put(env.mlx, env.win, dots[x].x, dots[x].y, 0x00FFFFFF);
		line = d_line(env.mlx, env.win, p0, p1);
	}
	mlx_key_hook(env.win, key_event, 0);
	loop = mlx_loop(mlx);
