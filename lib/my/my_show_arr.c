/*
** EPITECH PROJECT, 2022
** show array
** File description:
** my_show_arr
*/

void my_putstr(char const *str);

void my_show_arr(char **arr)
{
    for (int i = 0; arr[i] != 0; i++) {
        my_putstr(arr[i]);
        if (arr[i + 1] != 0) my_putstr("\n");
    }
}
