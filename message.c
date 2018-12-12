/*
** EPITECH PROJECT, 2018
** 103cypher
** File description:
** description
*/

#include "include/struct.h"

void init_matrix_message(char *message, matrix_t *matrix)
{
    matrix->matrix = malloc(sizeof(int *) * matrix->nb_lines);
    for (int i = 0; i < matrix->nb_lines; i++)
        matrix->matrix[i] = malloc(sizeof(int) * matrix->nb_cols);
    init_matrix(matrix);

    for (int i = 0; i < matrix->nb_lines; i++) {
        for (int j = 0; j < matrix->nb_cols; j++) {
            matrix->matrix[i][j] = message[i * matrix->nb_cols + j];
        }
    }

    for (int i = 0; i < matrix->nb_lines; i++) {
        for (int j = 0; j != matrix->nb_cols; j++)
            printf("%d ", matrix->matrix[i][j]);
        printf("\n");
    }
}