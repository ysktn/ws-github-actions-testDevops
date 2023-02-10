/*
** EPITECH PROJECT, 2023
** swapupcase
** File description:
** swapupcase.c
*/

#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
#include "swapupcase.h"

int swapupcase(char *str)
{
    if (str == NULL)
        return EPITECH_KO;

    int size = my_strlen(str);
    if (size == ERROR)
        return EPITECH_KO;
    bool is_string_odd = (size % 2) == 1;
    int res = trim_numbers(str, is_string_odd);
    if (res == ERROR)
        return EPITECH_KO;
    res = swap_string(str, is_string_odd);
    if (res == ERROR)
        return EPITECH_KO;
    res = case_string(str, is_string_odd);
    if (res == ERROR)
        return EPITECH_KO;

    write(1, str, size);

    return EPITECH_OK;
}
