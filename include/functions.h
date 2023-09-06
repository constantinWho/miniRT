#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "miniRT.h"

//parse.c
int ft_file_validation(char *file);
t_rt *ft_parse(char *file, t_rt *rt);

//parse_utils.c
int ft_error(char *err_msg);
int ft_is_only_spaces(char *str);

//check_file_content.c
int ft_check_extention(char *file);
char *ft_file_to_str(char *file);
int ft_elements_num(char *file_str);

//init_parse_struct.c
int ft_init_parse_rt(t_rt **rt);


//ft_free.c
void ft_free_rt(t_rt *rt);

#endif