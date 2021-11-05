/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_strncat
*/

char *my_strncat(char *dest, char const *src, int nb);

char *my_strncat(char *dest, char const *src, int nb)
{
    int size = 0;
    while (dest[size] != '\0')
        size++;

    int i = 0;
    while (src[i] != '\0' && i < nb) {
        dest[size + i] = src[i];
        i++;
    }
    dest[size + i] = '\0';
    return dest;
}
