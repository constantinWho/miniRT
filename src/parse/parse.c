/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:50:17 by mparasku          #+#    #+#             */
/*   Updated: 2023/09/06 13:30:45 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/miniRT.h"

t_rt *ft_parse(char *file, t_rt *rt)
{
	if (!ft_file_validation(file))
		return (NULL);
	if (!ft_init_parse_rt(&rt))
		return (NULL);
	printf("%s\n", rt->scene->light.id);
	return (rt);	
}

int	ft_file_validation(char *file)
{
	char *file_str;
	
	if (ft_check_extention(file) == FALSE)
		return (FALSE);
	file_str = ft_file_to_str(file);
	if (!file_str)
		return (FALSE);
	if (file_str[0] == '\0')
	{
		free(file_str);
		return (ft_error("File is empty"));
	}
	free(file_str);
	return (TRUE);
}


