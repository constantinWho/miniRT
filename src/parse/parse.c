/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:50:17 by mparasku          #+#    #+#             */
/*   Updated: 2023/09/05 13:07:35 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/miniRT.h"

int	ft_parse(char *file)
{
	int	fd;

	if (ft_check_extention(file) == FALSE)
		return (-1);
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (ft_error("File opening failed"));
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