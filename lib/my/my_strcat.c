/*
** EPITECH PROJECT, 2022
** concat str
** File description:
** concat_str
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_strlen(char *str);

char *my_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    for (; src[j] != '\0'; j++) {
        dest[i] = src[j];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char *my_strcat2(char *dest, char *src0, char *src1)
{
    int i = 0;
    int k = 0;
    for (; i < my_strlen(src0); i++) {
        dest[k] = src0[i];
        k++;
    }
    for (int j = 0; j < my_strlen(src1); j++) {
        dest[k] = src1[j];
        k++;
    }
    dest[k] = '\0';
    return dest;
}

char *my_strcat3(char *dest, char *src0, char *src1, char sep)
{
    int i = 0;
    int k = 0;
    for (; i < my_strlen(src0); i++) {
        dest[k] = src0[i];
        k++;
    }
    dest[k] = sep;
    k++;
    for (int j = 0; j < my_strlen(src1); j++) {
        dest[k] = src1[j];
        k++;
    }
    dest[k] = '\0';
    return dest;
}
