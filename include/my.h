/*
** EPITECH PROJECT, 2019
** epitech, 2019
** File description:
** >define
*/

#ifndef _MY_H_
#define _MY_H_

void my_putchar(char c);

int my_isneg(int nb);

int my_put_nbr(int nb);

void my_swap(int *a, int *b);

int my_putstr(char const *str);

int my_strlen(char const *str);

int my_getnbr(char const *str);

void my_sort_int_array(int *tab, int size);

int my_compute_power_rec(int nb, int power);

int my_compute_square_root(int nb);

int my_is_prime(int nb);

int my_find_prime_sup(int nb);

char *my_strcpy(char *dest, char const *src);

char *my_strncpy(char *dest, char const *src, int n);

char *my_revstr(char *str);

char *my_strstr(char *str, char const *to_find);

int my_strcmp(char const *s1, char const *s2);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strupcase(char *str);

char *my_strlowcase(char *str);

char *my_strcapitalize(char *str);

int my_str_isalpha(char const *str);

int my_str_isnum(char const *str);

int my_str_islower(char const *str);

int my_str_isupper(char const *str);

int my_str_isprintable(char const *str);

int my_showstr(char const *str);

int my_showmem(char const *str, int size);

char *my_strcat(char *dest, char const *src);

char *my_strncat(char *dest, char const *src, int nb);

char *concat_params(int argc, char **argv);

int my_show_word_array(char *const *tab);

char *my_strdup(char const *src);

char **my_str_to_word_array(char const *str);

int word_count(char const *str);

int word_countsize(char const *str, int debut);

int char_is_alpha_num(char str);

int countnegative(char const *str);

long int ext_func(char const *str, int len, int y);

void display_my_showmem(int value, char *str);

void ext_fonc_sort_ar(int *a, int *b);

int isalphas(char str);

int isupperalpha(char str);

int get_color(unsigned char red, unsigned char green, unsigned char blue);

int my_sort_word_array(char **tab);

void segmentation_fault(void);

#endif
