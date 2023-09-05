/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:50:17 by mparasku          #+#    #+#             */
/*   Updated: 2023/09/05 16:45:36 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/miniRT.h"

int ft_parse(char *file, t_rt *rt)
{
	char *line;

	rt = malloc(sizeof(t_rt));
	if (!rt) 
		return(ft_error("rt struct allocation failed"));
	rt->scene = malloc(sizeof(t_scene));
	if (!rt->scene)
		return(ft_error("rt->scene struct allocation failed"));
	rt->scene->ambiant = NULL;
	rt->scene->camera = NULL;
	rt->scene->light = NULL;
	
	return (TRUE);
}



int	ft_file_check(char *file)
{
	int	fd;
	char *line;

	if (ft_check_extention(file) == FALSE)
		return (-1);
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (ft_error("File opening failed"));
	line = get_next_line(fd);
	if (!line)
	{
		free(line);
		return (ft_error("Empty file"));
	}
	free(line);
	return (TRUE);
}

int ft_check_extention(char *file)
{
	if (ft_str_ends_with(file, ".rt") != 0)
	{
		ft_error("Wrong extention");
		return (FALSE);
	}
	return (TRUE);
}

