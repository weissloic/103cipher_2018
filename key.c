/*
** EPITECH PROJECT, 2018
** 103cypher
** File description:
** description
*/

#include "include/struct.h"

void find_key_matrix_size(matrix_t *matrix, char *key)
{
    if (strlen(key) < 5) {
        matrix->nb_cols = 2;
        matrix->nb_lines = 2;
    } else if (strlen(key) < 10) {
        matrix->nb_cols = 3;
        matrix->nb_lines = 3;
    }
}

void init_matrix_key(char *key, matrix_t *matrix)
{
    malloc_matrix(matrix);
    init_matrix(matrix);

    for (int i = 0; i < matrix->nb_lines; i++) {
        for (int j = 0; j < matrix->nb_cols; j++) {
            if (strlen(key) <= i * matrix->nb_cols + j)
                matrix->matrix[i][j] = 0;
            else
                matrix->matrix[i][j] = key[i * matrix->nb_cols + j];
        }
    }
}