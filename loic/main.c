/*
** EPITECH PROJECT, 2018
** 103cypher
** File description:
** description
*/

#include "../include/struct.h"
#include <string.h>
#include <math.h>



double **init_matrice(double **matrix)
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            matrix[i][j] = 0.00;
    }
    return (matrix);
}

void print_key_matrix(char *matrix_key, matrix_t  *matrix_key, char **av)
{
    int matrix_lenght = strlen(av[1]);

    if (matrix_lenght <= 4) {
    matrix_two(matrix_key);
    }
    else if (matrix_lenght <= 9) {
        matrix_three(matrix_key);
    }
    printf("%d", matrix_lenght);
}

void matrix_two(matrix_t *matrix_key)
{
    matrix_key->nb_lines = 2;
    matrix_key->nb_cols = 2;
    matrix_key->matrix = malloc(sizeof(int *) * matrix_key->nb_lines);
    for (int i = 0; i < matrix_key->nb_cols; i++)
        matrix_key->matrix[i] = malloc(sizeof(char) * matrix_key->nb_cols);
    stock_matrix(matrix_key);
}

void matrix_three (matrix_t  *matrix_key)
{
    matrix_key->nb_lines = 3;
    matrix_key->nb_cols = 3;
    matrix_key->matrix = malloc(sizeof(int *) * matrix_key->nb_lines);
    for (int i = 0; i < matrix_key->nb_cols; i++)
        matrix_key->matrix[i] = malloc(sizeof(char) * matrix_key->nb_cols);

    stock_matrix(matrix_key);
}

void stock_matrix(char *matrix_tab, matrix_t  *matrix_key)
{
    for(int i = 0; matrix_tab[i] != '\0'; i++) {
        for(int j = 0; matrix_tab[i] <= matrix_key->nb_cols; j++) {
            matrix_key->matrix[i][j] = matrix_tab[i];
        }
    }
}

int main(int ac, char **av)
{
    int i = 0;
    int matrix_lenght = strlen(av[1]);

    matrix_t  *matrix_key = malloc(sizeof(matrix_t));
    print_key_matrix(av[1]);

    return (0);
}