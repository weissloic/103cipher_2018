/*
** EPITECH PROJECT, 2018
** 103cypher
** File description:
** description
*/

#include "include/struct.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void init_matrix(matrix_t *matrix)
{
    for (int i = 0; i < matrix->nb_lines; i++) {
        for (int j = 0; j < matrix->nb_cols; j++)
            matrix->matrix[i][j] = 0;
    }
}

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

void init_matrix_message(char *message, matrix_t *matrix)
{
    matrix->matrix = malloc(sizeof(int *) * matrix->nb_lines + 1);
    for (int i = 0; i < matrix->nb_lines; i++)
        matrix->matrix[i] = malloc(sizeof(int) * matrix->nb_cols + 1);
    init_matrix(matrix);

    for (int i = 0; i < matrix->nb_lines; i++) {
        for (int j = 0; j != matrix->nb_cols; j++) {
            matrix->matrix[i][j] = message[i * matrix->nb_cols + j];
        }
    }
    matrix->matrix[matrix->nb_lines - 1][matrix->nb_cols - 1] = 0;

    for (int i = 0; i < matrix->nb_lines; i++) {
        for (int j = 0; j != matrix->nb_cols; j++)
            printf("%d ", matrix->matrix[i][j]);
        printf("\n");
    }
}

void init_matrix_key(char *key, matrix_t *matrix)
{
    matrix->matrix = malloc(sizeof(int *) * matrix->nb_lines + 1);
    for (int i = 0; i < matrix->nb_lines; i++)
        matrix->matrix[i] = malloc(sizeof(int) * matrix->nb_cols + 1);
    init_matrix(matrix);

    for (int i = 0; i < matrix->nb_lines; i++) {
        for (int j = 0; j != matrix->nb_cols; j++)
            matrix->matrix[i][j] = key[i * matrix->nb_cols + j];
    }
    matrix->matrix[matrix->nb_lines - 1][matrix->nb_cols - 1] = 0;

    for (int i = 0; i < matrix->nb_lines; i++) {
        for (int j = 0; j != matrix->nb_cols; j++)
            printf("%d ", matrix->matrix[i][j]);
        printf("\n");
    }
}

void free_malloc(matrix_t *matrix)
{
    for (int i = 0; i < matrix->nb_lines; i++)
        free(matrix->matrix[i]);
    free(matrix->matrix);
    free(matrix);
}

int main(int ac, char **av)
{
    matrix_t *matrix_key = malloc(sizeof(matrix_t));
    matrix_t *matrix_mess = malloc(sizeof(matrix_t));

    char *message = av[1];
    char *key = av[2];

    find_key_matrix_size(matrix_key, key);

    matrix_mess->nb_cols = matrix_key->nb_cols;
    matrix_mess->nb_lines = strlen(message) / matrix_mess->nb_cols;
    if (strlen(message) % matrix_mess->nb_cols != 0)
        matrix_mess->nb_lines++;

    printf("Key matrix:\n");
    init_matrix_key(key, matrix_key);
    printf("\n");
    printf("matrix message :\n");
    init_matrix_message(message, matrix_mess);

    free_malloc(matrix_key);
    free_malloc(matrix_mess);
}