#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "miniRT.h"

//parse.c
int ft_file_check(char *file);
int ft_check_extention(char *file);
int ft_parse(char *file, t_rt *rt);

//parse_utils.c
int ft_error(char *err_msg);


//ft_free.c
void ft_free_rt(t_rt *rt);
#endif