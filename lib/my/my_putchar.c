/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_putchar
*/

#include <unistd.h>

int my_putchar(char c);

int my_putchar(char c)
{
    return (write(1, &c, 1));
}
