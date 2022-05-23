/*
** EPITECH PROJECT, 2021
** print str
** File description:
** my_putstr
*/

void my_putchar(char a);

void my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}
