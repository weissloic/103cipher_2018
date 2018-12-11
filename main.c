/*
** EPITECH PROJECT, 2018
** 103cypher
** File description:
** description
*/

#include "include/struct.h"
#include <string.h>
#include <math.h>

void matrix_message(char *)
{

}

int main(int ac, char **av)
{
    int nb_charac = strlen(av[1]);
    printf("%d\n", nb_charac);

    char *stock_key = av[1];
    for (int i = 0; stock_key[i] != '\0'; i++)
        printf("%d\n", stock_key[i]);
    return (0);
}