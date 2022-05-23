/*
** EPITECH PROJECT, 2021
** free array
** File description:
** my_free_arr
*/

#include <stdlib.h>

void my_free_arr(char **arr)
{
    for (int i = 0; arr[i] != 0; i++)
        free(arr[i]);
    if (arr != NULL)
        free(arr);
}
