/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinate_convert.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:11:46 by mparasku          #+#    #+#             */
/*   Updated: 2023/09/05 16:57:22 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/miniRT.h"

int ft_convert_coordinate(t_data *data, char *width, char *height)
{
    t_figure *figure = NULL;
    t_screen *screen = NULL;
    t_img *img = NULL;

    figure = malloc(sizeof(t_figure));
    if (!figure)
        return (FALSE);
    screen = malloc(sizeof(t_screen));
    if (!screen)
        return (FALSE);
    img = malloc(sizeof(t_img));
    if (!img)
        return (FALSE);

    figure->width = ft_atoi(width);
    figure->height = ft_atoi(height);
    img->image = mlx_new_image(data->window, WIDTH, HEIGHT);
    if (!img->image || (mlx_image_to_window(data->window, img->image, 0, 0) < 0))
        return (FALSE);
    figure->centerX = figure->width / 2;
    figure->centerY = figure->height / 2;

    screen->centerX = WIDTH / 2;
    screen->centerY = HEIGHT / 2;
    
    data->figure = figure;
    data->screen = screen;
    data->img = img;
/*     for (int y = 0; y < figure->width; y++) {
        for (int x = 0; x < figure->height; x++) {
            mlx_put_pixel(data->img->image, x, y, 0xFF0000FF); // Set each pixel to red (0xFF0000FF)
        }
    } */
    ft_put_on_screen(data);
    return (TRUE);
}

void ft_put_on_screen(t_data *data)
{
    int figX, figY, screenX, screenY;
    
    for (figY = -100; figY < data->figure->height; figY++)
    {
        for (figX = -100; figX < data->figure->width; figX++)
        {
            // Calculate screen coordinates for each pixel of the square
            screenX = data->screen->centerX + (figX - data->figure->centerX);
            screenY = data->screen->centerY + (figY - data->figure->centerY);

            // Debugging: Print coordinates
            printf("figX: %d, figY: %d, screenX: %d, screenY: %d\n", figX, figY, screenX, screenY);
            
            // Check for out-of-bounds access
            if (screenX >= 0 && screenX < WIDTH && screenY >= 0 && screenY < HEIGHT)
            {
                mlx_put_pixel(data->img->image, screenX, screenY, 0xFF0000FF);
            }
            else
            {
                printf("Out of bounds: screenX=%d, screenY=%d\n", screenX, screenY);
            }
        }
    }
}

