#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "miniRT.h"

//parse.c
int ft_file_validation(char *file);
int ft_parse(char *file, t_rt **rt);
int	ft_fill_structs(int fd, t_rt **rt, int index);

//parse_utils.c
int ft_error(char *err_msg);
int ft_count_arr_elements(char **tab);
void ft_free_2d_arr(char **tab);

//check_file_content.c
int ft_check_extention(char *file);
char *ft_file_to_str(char *file);
int ft_elements_num(char *file_str);

//init_parse_struct.c
int ft_init_parse_rt(t_rt **rt);

//light_camera_parse.c
int	ambient_light_parse(char *line, t_rt **rt);

//parse_numbers.c
int ft_parse_ratio(char *str, float *ratio);

//ft_free.c
void ft_free_rt(t_rt *rt);

#endif