/*
** EPITECH PROJECT, 2018
** 103cypher
** File description:
** description
*/

#include "include/struct.h"

void find_mes_matrix_size(matrix_t *matrix, matrix_t *key, char *message)
{
    matrix->nb_cols = key->nb_cols;
    matrix->nb_lines = strlen(message) / matrix->nb_cols;
    if (strlen(message) % matrix->nb_cols != 0)
        matrix->nb_lines++;
}

void init_matrix_message(char *message, matrix_t *matrix)
{
    malloc_matrix(matrix);
    init_matrix(matrix);

    for (int i = 0; i < matrix->nb_lines; i++) {
        for (int j = 0; j < matrix->nb_cols; j++) {
            if (strlen(message) <= i * matrix->nb_cols + j)
                matrix->matrix[i][j] = 0;
            else
            matrix->matrix[i][j] = message[i * matrix->nb_cols + j];
        }
    }
    for (int i = 0; i < matrix->nb_lines; i++) {
        for (int j = 0; j != matrix->nb_cols; j++)
            printf("%d ", matrix->matrix[i][j]);
        printf("\n");
    }
}