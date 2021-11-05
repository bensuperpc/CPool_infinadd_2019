/*
** EPITECH PROJECT, 2019
** epitech-c-cpp-headers.addHeader
** File description:
** >epitech-c-cpp-headers.addHeader
*/

int my_strlen(char const *str);

int my_getnbr(char const *str);

long int ext_func(char const *str, int len, int y);

int countnegative(char const *str);

int my_getnbr(char const *str)
{
    int y = 0;
    int len = my_strlen(str) - 1;
    long int i = 0;
    int negative = countnegative(str);

    i = ext_func(str, len, y);
    if (i >= 2147483648 && negative % 2 == 0)
        return (0);
    if (negative % 2 == 1)
        i *= -1;
    return i;
}

long int ext_func(char const *str, int len, int y)
{
    long int i = 0;
    while (y <= len) {
        if ((str[y] >= 48 && str[y] <= 57)) {
            if (i * 10 + (str[y] - 48) > 2147483648)
                return (0);
            i = i * 10 + (str[y] - 48);
        } else {
            if (i > 0 || i < 0) {
                y = my_strlen(str) - 1;
            }
        }
        y++;
    }
    return i;
}

int countnegative(char const *str)
{
    int i = 0;
    int negative = 0;
    while (str[i] != '\0') {
        if (str[i] == '-')
            negative = negative + 1;
        i++;
    }
    return negative;
}
