/*
** EPITECH PROJECT, 2022
** display help
** File description:
** display_help
*/

#include <fcntl.h>
#include <unistd.h>

void display_help(char *path)
{
    char buff[1];
    int fd = open(path, O_RDONLY);

    while (read(fd, buff, 1) != 0)
        write(1, buff, 1);
    return;
}
