/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   light_camera_parse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mparasku <mparasku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:56:54 by mparasku          #+#    #+#             */
/*   Updated: 2023/09/08 12:30:24 by mparasku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/miniRT.h"

int	ambient_light_parse(char *line, t_rt **rt)
{
	int i;
	char **tab;
	t_ambient amb;

	i = 1;
	if ((*rt)->scene->ambient.id)
		return (ft_error("More then 1 ambient light"));
	tab = ft_split(line, ' ');
	if (!tab)
		return (ft_error("Ambient tab malloc failed"));
	if (ft_count_arr_elements(tab) != 3)
	{
		ft_free_2d_arr(tab);
		return (ft_error("A: wrong number of arguments"));
	}
	ft_bzero(&amb, sizeof(t_ambient));
	amb.id = "A";
	if (!ft_parse_ratio(tab[1], &amb.ratio))
	{
		ft_free_2d_arr(tab);
		return (ft_error("A: not valid ratio format"));
	}
	if (!ft_parse_color(tab[2], &amb.color))
	{
		ft_free_2d_arr(tab);
		return (ft_error("A: not valid color format"));
	}
	(*rt)->scene->ambient = amb;
	ft_free_2d_arr(tab);
	return (TRUE);
}