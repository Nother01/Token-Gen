/*
** EPITECH PROJECT, 2022
** strcmp
** File description:
** my_strcmp
*/

int my_strlen(char *str);

int my_strcmp(char *s1, char *s2)
{
    if (!s1 || !s2 || my_strlen(s1) != my_strlen(s2))
        return (1);
    for (int i = 0; s1[i] != '\0'; i++)
        if (s1[i] != s2[i])
            return (1);
    return (0);
}
