/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/26 14:45:44 by mwingrov          #+#    #+#             */
/*   Updated: 2017/11/22 14:09:46 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void				d_line(void *mlx, void *win, t_coo p0, t_coo p1)
{
	t_coo			point;
	int				steps;
	t_coo			cnt;
	t_coo			mv;

	if ((point.x = fabs(p1.x - p0.x)) >
			(point.y = fabs(p1.y - p0.y)))
		steps = (point.x);
	else
		steps = (point.y);
	if (p0.x > p1.x)
		point.x = -(point.x);
	if (p0.y > p1.y)
		point.y = -(point.y);
	mv.i = 0;
	cnt.x = p0.x;
	cnt.y = p0.y;
	mv.x = point.x / steps;
	mv.y = point.y / steps;
	while (mv.i++ < steps)
	{
		cnt.x = cnt.x + mv.x;
		cnt.y = cnt.y + mv.y;
		mlx_pixel_put(mlx, win, cnt.x, cnt.y, 0x0000FF00);
	}
}
