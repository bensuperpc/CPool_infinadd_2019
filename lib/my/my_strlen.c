/*
** EPITECH PROJECT, 2019
** epitech-c-cpp-headers.addHeader
** File description:
** >epitech-c-cpp-headers.addHeader
*/

int my_strlen(char const *str);

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}
