/*
** EPITECH PROJECT, 2021
** str to array
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>

int my_strlen(char const *str);

static int check_char(char a, char sep)
{
    if (a == '\n' || a == sep || a == 9)
        return (1);
    return (0);
}

static int find_pos_next(char *str, int i, char sep)
{
    for (; check_char(str[i], sep) != 1 && i < my_strlen(str); i++);
    return (i);
}

static int how_many_word(char *str, char sep)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (check_char(str[i], sep) == 1
            && check_char(str[i + 1], sep) == 0)
            count++;
    count++;
    return (count);
}

static char *my_word_cpy(int min, char const *str, int max)
{
    char *ret = malloc(sizeof(char) * (max - min) + 1);
    ret[max - min] = '\0';

    for (int i = 0, b = min; b < max; i++, b++)
        ret[i] = str[b];
    return (ret);
}

char **my_str_to_word_array(char *str, char separator)
{
    int lim_min = 0;

    while (check_char(str[lim_min], separator) == 1
        && lim_min < my_strlen(str))
        lim_min++;
    int words = how_many_word(str, separator);
    char **ret = malloc(sizeof(char *) * (words + 1));
    ret[words] = '\0';
    int lim_max = find_pos_next(str, lim_min, separator);

    for (int i = 0; i < words; i++) {
        ret[i] = my_word_cpy(lim_min, str, lim_max);
        lim_min = lim_max;
        while (check_char(str[lim_min], separator) == 1
            && lim_min < my_strlen(str))
            lim_min++;
        lim_max = find_pos_next(str, lim_min, separator);
    }
    return (ret);
}
