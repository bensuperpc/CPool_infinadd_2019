/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_str_isnum
*/

int my_str_isnum(char const *str);

int my_str_isnum(char const *str)
{
    if (str[0] == '\0')
        return (1);
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] <= 47 || str[i] >= 58)
            return (0);
        i++;
    }
    return (1);
}
