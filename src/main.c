/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:53:53 by mparasku          #+#    #+#             */
/*   Updated: 2023/09/04 18:22:02 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/miniRT.h"
/* 
static void ft_hook(void* param)
{
	const mlx_t* mlx = param;

	printf("WIDTH: %d | HEIGHT: %d\n", mlx->width, mlx->height);
} */

int main(int ac, char **av) //put size for square
{
    t_data *data = NULL;

    data = malloc(sizeof(t_data));
    if (!data)
        return -1;
    if (ac != 3)
        return -1;
    data->figure = NULL;
    data->screen = NULL;
    data->img = NULL;
    //mlx_set_setting(MLX_MAXIMIZED, true); //- to maximaze the window
    if (!(data->window = mlx_init(WIDTH, HEIGHT, "miniRT", true)))
	{
		puts(mlx_strerror(mlx_errno));
		return(EXIT_FAILURE);
	}

/* 	// Create and display the image.
	mlx_image_t* img = mlx_new_image(mlx, 256, 256);
	if (!img || (mlx_image_to_window(mlx, img, 0, 0) < 0))
		ft_error();

	// Even after the image is being displayed, we can still modify the buffer.
	x_put_pixel(img, 0, 0, 0xFF0000FF); */
    ft_convert_coordinate(data, av[1], av[2]);
    mlx_loop(data->window);
    mlx_terminate(data->window);
    free(data->figure);
    free(data->screen);
    free(data);
	return (EXIT_SUCCESS);
}