/*
** EPITECH PROJECT, 2022
** my_h
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H
    #include <stddef.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <time.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <unistd.h>
    #include <fcntl.h>

//-----------------LIBARY--------------------------------
void my_free_arr(char **arr);
int my_getnbr(char const *str);
int my_put_nbr(int nb);
void my_putchar(char a);
void my_putstr(char const *str);
char *get_file(char *path);
char **my_str_to_word_array(char *str, char separator);
int my_strlen(char *str);
int my_strcmp(char *s1, char *s2);
void display_help(char *path);
int check_error(int ac, char **av);
void my_show_arr(char **arr);
char *str_cut(char *src, char sep, int type);
char *my_strcat(char *dest, char *src);
char *my_strcat2(char *dest, char *src0, char *src1);
char *my_strcat3(char *dest, char *src0, char *src1, char sep);
void add_arr(char **dest, char **arr, int i);
char **malloc_all(int x);
char **get_argv(char *filepath, char c);
void fille_array(char c, char **arr);
//-----------------END LIBARY----------------------------
char *generate_int(int size);
char *generate_char(int size);
char random_int(void);
char random_char(void);
char *finalkey(int size0, int size1);

void reset_file(char const *filepath);
void add_str_file(char const *filepath, char *buff, char *key);
char *new_data_file(char *buff, char *str);
void write_file(char const *filepath, char *str);
char *buff_file(char const *filepath);

int chekc_key(char **file, char *key);
int check_argv(int argc, char **argv, const char *filepath);
#endif /* !MY_H_ */
