/*
** EPITECH PROJECT, 2019
** epitech-c-cpp-headers.addHeader
** File description:
** >epitech-c-cpp-headers.addHeader
*/

#include <stdlib.h>

char *my_strdup(char const *src);

char *my_strdup(char const *src)
{
    char *str = NULL;
    int i = 0;
    while (src[i] != '\0')
        i++;

    str = (char *)malloc(sizeof(char) * (i + 1));
    i = 0;
    while (src[i] != '\0') {
        str[i] = src[i];
        i++;
    }

    if (str == NULL)
        return NULL;
    return str;
}
