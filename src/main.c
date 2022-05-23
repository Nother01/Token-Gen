/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** main
*/

#include "../include/my.h"

int main(int argc, char **argv)
{
    char *key = finalkey(30, 5);
    char *buff = buff_file("save/key.hh");
    char **file = my_str_to_word_array(buff, ' ');

    if (check_argv(argc, argv, "save/key.hh"))
        return 1;
    else if (chekc_key(file, key) != 0)
        add_str_file("save/key.hh", buff, key);
    else
        return 84;

    return 0;
}
