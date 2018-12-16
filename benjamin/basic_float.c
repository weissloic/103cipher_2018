/*
** EPITECH PROJECT, 2018
** 103cypher
** File description:
** description
*/

#include "include/struct.h"

void malloc_float(matrix_t *matrix)
{
    matrix->matrix_dec = malloc(sizeof(double *) * matrix->nb_lines);
    for (int i = 0; i < matrix->nb_lines; i++)
        matrix->matrix_dec[i] = malloc(sizeof(double) * matrix->nb_cols);
}

void init_float(matrix_t *matrix)
{
    for (int i = 0; i < matrix->nb_lines; i++) {
        for (int j = 0; j < matrix->nb_cols; j++)
            matrix->matrix_dec[i][j] = 0;
    }
}

void init_matrix_key_f(char *key, matrix_t *matrix)
{
    for (int i = 0; i < matrix->nb_lines; i++) {
        for (int j = 0; j < matrix->nb_cols; j++) {
            if (strlen(key) <= i * matrix->nb_cols + j)
                matrix->matrix_dec[i][j] = 0;
            else
                matrix->matrix_dec[i][j] = key[i * matrix->nb_cols + j];
        }
    }
}

void print_matrix_f(matrix_t *matrix)
{
    for (int i = 0; i != matrix->nb_lines; i++) {
        for (int j = 0; j != matrix->nb_cols; j++) {
            printf("%f", matrix->matrix_dec[i][j]);
            if (j != matrix->nb_cols - 1)
                printf("\t");
        }
        printf("\n");
    }
}