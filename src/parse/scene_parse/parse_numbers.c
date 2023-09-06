/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:07:54 by mparasku          #+#    #+#             */
/*   Updated: 2023/09/06 17:23:51 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/miniRT.h"

int ft_parse_ratio(char *str, float *ratio)
{
	//to check if str is a float
	//if yes
		//convert str to float
	//check that float is between 0 and 1
	if (str)
	{
		*ratio = 2.0;
		return (TRUE);
	}
	return (FALSE);
}