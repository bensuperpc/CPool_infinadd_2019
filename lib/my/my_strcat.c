/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_strcat
*/

char *my_strcat(char *dest, char const *src);

char *my_strcat(char *dest, char const *src)
{
    int size = 0;
    while (dest[size] != '\0')
        size++;

    int i = 0;
    while (src[i] != '\0') {
        dest[size + i] = src[i];
        i++;
    }
    dest[size + i] = '\0';
    return dest;
}
