/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 14:18:29 by mwingrov          #+#    #+#             */
/*   Updated: 2017/07/02 18:15:43 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include "libft/includes/get_next_line.h"
#include <stdlib.h>
int	read_line(delta **arg)
{
	int			index;
	int			ret;
	t_point		p0;
	t_point1	p1;

	p1.fd = open("42.fdf", O_RDONLY);
	p1.lines = 0;
	while (get_next_line(p1.fd, &p1.line) == 1)
	{
		p1.lines++;
		p1.f = ft_strsplit(b.line, ' ');
		p1.i = 0;
		while (p1.f[p1.i])
			p1.i++;
	}
	close(p1.fd);
	index = 0;
	ret = p1.lines * p1.i;
	if (!(*arr = (t_arr*)malloc(sizeof(t_arr) * p1.lines * p1.i)))
		return (-1);
	p1.fd = open("42.fdf", O_RDONLY);
	while (get_next_line(p1.fd, &p1.line) == 1)
	{
		p1.f = ft_strsplit(b.line, ' ');
		p1.i = -1;
		while (p1.f[++p1.i])
		{
			p0.x = p1.i;
			p0.y = p1.j;
			p0.z = ft_atoi(p1.f[p1.i]);
			(*arr)[index++] = a;
		}
		p1.j++;
	}
	close(p1.fd);
	return (ret);
}
