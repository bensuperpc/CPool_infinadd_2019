/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_putchar
*/

char *my_strncpy(char *dest, char const *src, int n);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    for (; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];

    for (; i < n; i++)
        dest[i] = '\0';
    return dest;
}
