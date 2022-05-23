/*
** EPITECH PROJECT, 2022
** get file
** File description:
** get_file
*/

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void my_putstr(char const *str);

char *get_file(char *path)
{
    char *buff = malloc(sizeof(char) * 4000);
    int offset = 0;
    int len = 0;

    int fd = open(path, O_RDONLY);
    if (fd < 0)
        return (NULL);
    while ((len = read(fd, buff + offset, 4000 - offset)) > 0)
        offset = offset + len;
    buff[offset] = '\0';
    return (offset < 1) ? NULL : buff;
}
