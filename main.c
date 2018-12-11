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

void matrix_message(char *message, matrix_t *matrix)
{
    matrix->matrix = malloc(sizeof(int *) * matrix->nb_lines);
    for (int i = 0; i < matrix->nb_lines; i++)
        matrix->matrix[i] = malloc(sizeof(int) * matrix->nb_cols);

    for (int i = 0; message[i] != '\0'; i++) {
        for (int j = 0; j != matrix->nb_cols; j++) {
            matrix->matrix[i][j] = message[i * matrix->nb_cols + j];
        }
    }
    for (int i = 0; message[i] != '\0'; i++) {
        for (int j = 0; j != matrix->nb_cols; j++)
            printf("%d ", matrix->matrix[i][j]);
        printf("\n");
    }
}

int main(int ac, char **av)
{
    matrix_t *matrix_key = malloc(sizeof(matrix_t));
    matrix_t *matrix_mess = malloc(sizeof(matrix_t));

    char *message = av[1];

    matrix_mess->nb_cols = 3;
    matrix_mess->nb_lines = strlen(message);
    //printf("%d\n", matrix_mess->nb_lines);

    matrix_message(message, matrix_mess);
}