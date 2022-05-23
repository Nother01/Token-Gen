/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** my_putchar
*/

#include <unistd.h>

void my_putchar(char a)
{
    write(1, &a, 1);
}
