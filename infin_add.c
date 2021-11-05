/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >infin_add
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void infin_add(char **argv, int *neg);

char *remove_zero(char const *st);

void function_add_pos(char **argv, char *result);

void function_sous_pos(char **argv, char *result, int *neg);

void function_sous_pos_sub(char **argv, char *result);

void infin_add(char **argv, int *neg)
{
    int size[2] = {my_strlen(argv[0]), my_strlen(argv[1])};
    char *result
        = malloc(sizeof(char) * (size[0] >= size[1] ? size[0] : size[1]) + 1);
    argv[0] = my_revstr(argv[0]);
    argv[1] = my_revstr(argv[1]);
    if ((neg[0] == 0 && neg[1] == 0) || (neg[0] == 1 && neg[1] == 1))
        function_add_pos(argv, result);
    if (neg[0] == 1 && neg[1] == 1)
        write(1, "-", 1);
    if ((neg[0] == 0 && neg[1] == 1) || (neg[0] == 1 && neg[1] == 0)) {
        function_sous_pos(argv, result, neg);
    } else {
        my_revstr(result);
        write(1, remove_zero(result), my_strlen(remove_zero(result)));
    }
    my_putstr("\n");
}

void function_add_pos(char **argv, char *result)
{
    int ret = 0;
    int tmp_res = 0;
    for (int i = 0; (i < my_strlen(argv[0]) || i < my_strlen(argv[1])); i++) {
        if (i < my_strlen(argv[0])) {
            if (i < my_strlen(argv[1]))
                tmp_res = (argv[0][i] - 48) + (argv[1][i] - 48) + ret;
            if (i >= my_strlen(argv[1]))
                tmp_res = argv[0][i] - 48 + ret;
        }
        if (i >= my_strlen(argv[0]) && i < my_strlen(argv[1]))
            tmp_res = argv[1][i] - 48 + ret;
        ret = 0;
        if (tmp_res >= 10) {
            ret = 1;
            tmp_res -= 10;
        }
        result[i] = tmp_res + 48;
        if (ret == 1 && i + 1 >= my_strlen(argv[0])
            && i + 1 >= my_strlen(argv[1]))
            result[i + 1] = 1 + 48;
    }
}

char *remove_zero(char const *cst)
{
    char *st = malloc(sizeof(char) * my_strlen(cst));
    my_strcpy(st, cst);
    if (my_strlen(cst) == 1 && cst[0])
        return st;
    while (*st != '\0' && *st == '0')
        st = st + 1;
    return st;
}

void function_sous_pos(char **argv, char *result, int *neg)
{
    int isneg = 0;
    char **argvrev = malloc(sizeof(char *) * 2);
    if (my_strlen(argv[0]) < my_strlen(argv[1])) {
        if (neg[1] == 1)
            isneg = 1;
        argvrev[0] = malloc(sizeof(char) * my_strlen(argv[1]));
        argvrev[1] = malloc(sizeof(char) * my_strlen(argv[0]));
        my_strcpy(argvrev[1], argv[0]);
        my_strcpy(argvrev[0], argv[1]);
        argv[0] = malloc(sizeof(char) * my_strlen(argvrev[0]));
        argv[1] = malloc(sizeof(char) * my_strlen(argvrev[1]));
        my_strcpy(argv[1], argvrev[1]);
        my_strcpy(argv[0], argvrev[0]);
        neg[0] = 0;
    }
    function_sous_pos_sub(argv, result);
    if ((my_strlen(argv[0]) > my_strlen(argv[1]) && neg[0] == 1 ) || isneg == 1)
        write(1, "-", 1);
    my_revstr(result);
    write(1, remove_zero(result), my_strlen(remove_zero(result)));
}

void function_sous_pos_sub(char **argv, char *result)
{
    int ret = 0;
    int tmp_res = 0;
    for (int i = 0; (i < my_strlen(argv[0]) || i < my_strlen(argv[1])); i++) {
        if (i < my_strlen(argv[0])) {
            if (i < my_strlen(argv[1]))
                tmp_res = (argv[0][i] - 48) - (argv[1][i] - 48) + ret;
            if (i >= my_strlen(argv[1]))
                tmp_res = argv[0][i] - 48 + ret;
        }
        if (i >= my_strlen(argv[0]) && i < my_strlen(argv[1]))
            tmp_res = argv[1][i] - 48;
        ret = 0;
        if (tmp_res < 0) {
            ret = -1;
            tmp_res = 10 + tmp_res;
        }
        result[i] = tmp_res + 48;
    }
}
