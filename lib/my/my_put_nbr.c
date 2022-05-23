/*
** EPITECH PROJECT, 2021
** put nbr
** File description:
** my_put_nbr
*/

int my_putchar(char a);

int my_put_nbr(int nb)
{
    if (nb >= 0 && nb < 10)
        my_putchar(nb + 48);
    else if (nb < 0) {
        my_putchar(45);
        my_put_nbr(-nb);
    } else {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return (0);
}
