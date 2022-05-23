/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** gen
*/

#include "../include/my.h"

char random_int(void)
{
    char charset[] = "0123456789";
    int r = rand() % 10;
    return charset[r];
}

char random_char(void)
{
    char charset[] =
    "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789,.-#'?!";
    int r = rand() % 69;
    return charset[r];
}

char *generate_char(int size)
{
    char *str = malloc(sizeof(char) * (size + 1));
    srand(time(NULL));

    for (int i = 0; i < size; i++)
        str[i] = random_char();
    return str;
}

char *generate_int(int size)
{
    char *str = malloc(sizeof(char) * (size + 1));
    srand(time(NULL));

    for (int i = 0; i < size; i++)
        str[i] = random_int();
    str[size] = '\0';
    return str;
}

char *finalkey(int size0, int size1)
{
    char *str0 = generate_char(size0);
    char *str1 = generate_int(size1);
    char *str = malloc(sizeof(char) * 64);
    str = my_strcat2(str, str0, str1);
    return str;
}
