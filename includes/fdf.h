/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwingrov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 12:02:43 by mwingrov          #+#    #+#             */
/*   Updated: 2017/07/02 18:29:33 by mwingrov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <stdlib.h>
# include <mlx.h>

typedef struct	s_point
{
	double	x;
	double	y;
}				t_point;
typedef	struct	s_point1
{
	int	x;
	int	y;
}				t_point1;

typedef struct	a_point
{
	double	x;
	double	y;
}				delta;

typedef struct	b_point
{
	double	x;
	double	y;
}				move;

#endif
