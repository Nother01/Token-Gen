/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** file
*/

#include "../include/my.h"

void reset_file(char const *filepath)
{
    char *str = ".";
    FILE *fPtr;
    struct stat sb;
    if (stat(filepath, &sb) == -1)
        exit(84);
    fPtr = fopen(filepath, "w");
    fputs(str, fPtr);
    fclose(fPtr);
}

void add_str_file(char const *filepath, char *buff, char *key)
{
    char *str = new_data_file(buff, key);
    write_file(filepath, str);
}

void write_file(char const *filepath, char *str)
{
    FILE *fPtr;
    struct stat sb;
    if (stat(filepath, &sb) == -1)
        exit(84);
    fPtr = fopen(filepath, "w");
    fputs(str, fPtr);
    fclose(fPtr);
}

char *new_data_file(char *buff, char *str)
{
    char *data = malloc(sizeof(char) * (sizeof(buff) * 4096));
    data = my_strcat3(data, buff, str, '\n');
    return data;
    free(data);
}

char *buff_file(char const *filepath)
{
    int file, size;
    struct stat sb;
    if (stat(filepath, &sb) == -1)
        exit(84);
    char *buffer = malloc(sizeof(char) * (sb.st_size + 1));
    file = open(filepath, 00);
    size = read(file, buffer, sb.st_size);
    buffer[size] = '\0';
    close(file);
    return buffer;
    free(buffer);
}
