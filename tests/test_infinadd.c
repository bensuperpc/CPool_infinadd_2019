/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >test_infinadd
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void infin_add(char **argv, int *neg);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(cat, output_test, .init = redirect_all_stdout)
{
    char **sts = malloc(sizeof(char *) * 3);
    sts[0] = malloc(sizeof(char *) * 6);
    sts[0] = "./cat";
    sts[1] = malloc(sizeof(char *) * 4);
    sts[1] = "999";
    sts[2] = malloc(sizeof(char *) * 2);
    sts[2] = "1";

    int neg[2] = {0, 0};
    infin_add(sts, neg);
    cr_assert_stdout_eq_str("1000");
}
