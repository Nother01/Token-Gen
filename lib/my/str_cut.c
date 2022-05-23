/*
** EPITECH PROJECT, 2022
** string cut
** File description:
** str_cut
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_strlen(char *str);

int cnt_until(char *src, char sep)
{
    int ret = 0;

    while (src[ret++] != sep);
    return (ret);
}

char *rev_cut(char *src, char sep)
{
    int new_len = cnt_until(src, sep);
    char *ret = malloc(sizeof(char) * (new_len + 1));

    ret[new_len] = '\0';
    for (int i = 0; i < new_len; i++)
        ret[i] = src[i];
    return (ret);
}

char *str_cut(char *src, char sep, int type)
{
    if (type == 1)
        return (rev_cut(src, sep));
    int len = my_strlen(src);
    int new_len = len - cnt_until(src, sep);
    char *ret = malloc(sizeof(char) * (new_len + 1));

    ret[new_len] = '\0';
    for (int i = 0, b = len - new_len; i < new_len; i++, b++)
        ret[i] = src[b];
    return (ret);
}
