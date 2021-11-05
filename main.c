/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >main
*/

#include "my.h"

void infin_add(char **argv, int *neg);

int main(int argc, char **argv)
{
    if (argc == 3) {
        argv = argv + 1;
        int neg[2] = {(argv[0][0] == '-' ? 1 : 0), (argv[1][0] == '-' ? 1 : 0)};
        if (neg[0] == 1)
            argv[0] = argv[0] + 1;
        if (neg[1] == 1)
            argv[1] = argv[1] + 1;
        if (my_str_isnum(argv[0]) == 1 && my_str_isnum(argv[1]) == 1)
            infin_add(argv, neg);
    }
    return (0);
}
