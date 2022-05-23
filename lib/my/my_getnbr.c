/*
** EPITECH PROJECT, 2021
** get nbr in str
** File description:
** my_getnbr
*/

int my_getnbr(char const *str)
{
    int ret = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-' || str[i] == '+')
            continue;
        if (str[i] < 48 || str[i] > 57)
            continue;
        if (str[i] >= 48 && str[i] <= 57) {
            ret *= 10;
            ret += str[i] - 48;
        }
        if (ret != 0)
            break;
        else
            return (0);
    }
    if (str[0] == '-')
        ret *= -1;
    return (ret);
}
