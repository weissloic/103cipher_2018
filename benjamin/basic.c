/*
** EPITECH PROJECT, 2018
** 103cypher
** File description:
** description
*/

#include "include/struct.h"

void malloc_matrix(matrix_t *matrix)
{
    matrix->matrix = malloc(sizeof(int *) * matrix->nb_lines);
    for (int i = 0; i < matrix->nb_lines; i++)
        matrix->matrix[i] = malloc(sizeof(int) * matrix->nb_cols);
}

void print_matrix(matrix_t *matrix)
{
    for (int i = 0; i != matrix->nb_lines; i++) {
        for (int j = 0; j != matrix->nb_cols; j++) {
            printf("%d", matrix->matrix[i][j]);
            if (j != matrix->nb_cols - 1)
                printf("\t");
        }
        printf("\n");
    }
}

void init_matrix(matrix_t *matrix)
{
    for (int i = 0; i < matrix->nb_lines; i++) {
        for (int j = 0; j < matrix->nb_cols; j++)
            matrix->matrix[i][j] = 0;
    }
}

void free_malloc(matrix_t *matrix)
{
    for (int i = 0; i < matrix->nb_lines; i++)
        free(matrix->matrix[i]);
    free(matrix->matrix);
    free(matrix);
}

void print_result(matrix_t *matrix)
{
    for (int i = 0; i < matrix->nb_lines; i++) {
        for (int j = 0; j < matrix->nb_cols; j++) {
            printf("%d", matrix->matrix[i][j]);
            if (matrix->matrix[i][j] != matrix->matrix[matrix->nb_lines - 1][matrix->nb_cols - 1]) {
                printf(" ");
            }
        }
    }
}

int my_getnbr(char const *str)
{
    int rslt = 0;
    int sign = 1;
    int compt = 0;

    while (str[compt] <= 47 || str[compt] >= 58) {
        if (str[compt] == '-')
            sign = sign * (-1);
        compt++;
    }
    while (str[compt] > 47 && str[compt] < 58) {
        rslt = rslt * 10 + (str[compt] - 48);
        compt++;
    }
    rslt = sign * rslt;
    return (rslt);
}
