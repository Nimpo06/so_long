/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 23:29:43 by mayoub            #+#    #+#             */
/*   Updated: 2022/04/05 06:41:18 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	colle_image_wall(t_game *all, void *mlx, void *win)
{	
	mlx_put_image_to_window(mlx, win, all->img.wall, all->var.d_x,
		all->var.d_y);
	all->var.d_x += 64;
	all->var.j++;
}

void	colle_image_coin(t_game *all, void *mlx, void *win)
{
	//all->map.map[all->loc.y][all->loc.x];
	mlx_put_image_to_window(mlx, win, all->img.coin, all->var.d_x,
		all->var.d_y);
	all->var.d_x += 64;
	all->var.j++;
}

void	colle_image_player(t_game *all, void *mlx, void *win)
{
	mlx_put_image_to_window(mlx, win, all->img.player_front, all->var.d_x,
		all->var.d_y);
	all->loc.x = all->var.j;
	all->loc.y = all->var.i;
	all->loc.x++;
	all->loc.y++;
	all->pos.p_player = &all->map.map[all->loc.y][all->loc.x];
	printf("x = %d, y = %d, p_player = %c\n", all->loc.x, all->loc.y, all->map.map[all->loc.y][all->loc.x]);
	all->var.d_x += 64;
	all->var.j++;
}

void	colle_image_exit(t_game *all, void *mlx, void *win)
{	
	mlx_put_image_to_window(mlx, win, all->img.exit, all->var.d_x,
		all->var.d_y);
	all->var.d_x += 64;
	all->var.j++;
}

void	colle_image_vilain(t_game *all, void *mlx, void *win)
{
	mlx_put_image_to_window(mlx, win, all->img.vilain_front, all->var.d_x,
		all->var.d_y);
	all->var.d_x += 64;
	all->var.j++;
}
