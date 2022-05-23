/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** check
*/

#include "../include/my.h"

int chekc_key(char **file, char *key)
{
    for (int i = 0; file[i] != NULL; i++) {
        if (my_strcmp(file[i], key) == 0) {
            return 0;
        }
    } return 1;
}

int check_argv(int argc, char **argv, const char *filepath)
{
    for (int i = 0; i < argc; i++) {
        if (my_strcmp(argv[i], "-R") == 0
        || my_strcmp(argv[i], "--reset") == 0) {
            reset_file(filepath);
            return 1;
        }
    } return 0;
}
