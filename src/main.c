/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:53:53 by mparasku          #+#    #+#             */
/*   Updated: 2023/09/05 13:03:57 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/miniRT.h"

int	main(int ac, char **av) 
{
/* 	t_data *data;

	data = NULL; */
	if (ac != 2)
	{
		ft_putstr_fd("\033[31mError\n2 args required\n\033[0m", 2);
		ft_putstr_fd("\033[31m ./miniRT [scenes]\n\033[0m", 2);
		return (-1);
	}
	if (!ft_parse(av[1]))
		return(-1);
	return (0);
}
