/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:26:45 by mparasku          #+#    #+#             */
/*   Updated: 2023/09/06 12:32:16 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/miniRT.h"

int ft_error(char *err_msg)
{
	ft_putstr_fd(err_msg, 2);
	ft_putstr_fd("\n", 2);
	return (FALSE);
}

int ft_is_only_spaces(char *str)
{
	int i;

	i = 0;
	if (str[0] == '\0')
		return (FALSE);
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\0')
			return (FALSE);
		i++;
	}
	return (TRUE);
}