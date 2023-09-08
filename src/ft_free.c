/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:53:23 by mparasku          #+#    #+#             */
/*   Updated: 2023/09/08 13:58:46 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/miniRT.h"

void ft_free_rt(t_rt *rt)
{
    if (rt)
    {
        if (rt->scene)
        {
            free(rt->scene);
        }
        free(rt);
    }
}

void ft_print_all(t_rt *rt)
{
/* 	printf("-----ambient-------");
	printf("id: %s\n", rt->scene->ambient.id);
	printf("ratio: %f\n", rt->scene->ambient.ratio);
	printf("color r %i\n", rt->scene->ambient.color.r);
	printf("color g %i\n", rt->scene->ambient.color.g);
	printf("color b %i\n", rt->scene->ambient.color.b); */
	printf("-----camera-------\n");
	printf("coord x %f \n", rt->scene->camera.coord.x);
	printf("coord y %f \n", rt->scene->camera.coord.y);
	printf("coord z %f \n", rt->scene->camera.coord.z);
	printf("vec x %f \n", rt->scene->camera.vector.x);
	printf("vec y %f \n", rt->scene->camera.vector.y);
	printf("vec z %f \n", rt->scene->camera.vector.z);
	printf("fov %f \n", rt->scene->camera.fov);
}
