/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   miniRT.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:49:37 by mparasku          #+#    #+#             */
/*   Updated: 2023/09/04 18:10:08 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
#define MINIRT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include "../lib/MLX42/include/MLX42/MLX42.h"
#include "../lib/libft/libft.h"

#define WIDTH 1000
#define HEIGHT 800
#define FALSE 0
#define TRUE 1

typedef struct s_figure {
    float centerX;
    float centerY;
    float width;
    float height;
} t_figure;

typedef struct s_screen {
    float centerX;
    float centerY;
} t_screen;

typedef struct s_img {
    mlx_image_t *image;
} t_img;

typedef struct s_data {
    mlx_t *window;
    t_figure *figure;
    t_screen *screen;
    t_img *img; //maybe to do it as array if we have more than 1 picture
} t_data;


typedef struct s_vector {
    float x;
    float y;
    float z;
} t_vector;

int ft_convert_coordinate(t_data *data, char *width, char *height);
void ft_put_on_screen(t_data *data);


#endif