/*
** EPITECH PROJECT, 2018
** 103cypher
** File description:
** description
*/

#include "include/struct.h"

void init_matrix(matrix_t *matrix)
{
    for (int i = 0; i < matrix->nb_lines; i++) {
        for (int j = 0; j < matrix->nb_cols; j++)
            matrix->matrix[i][j] = 0;
    }
}

void calc_deter(matrix_t *matrix_key)
{
    matrix_key->deter_two = (matrix_key->matrix[0][0] * matrix_key->matrix[1][1]) - (matrix_key->matrix[0][1] * matrix_key->matrix[1][0]);
    matrix_key->deter_three = (matrix_key->matrix[0][0] * matrix_key->matrix[1][1] * matrix_key->matrix[2][2]) + (matrix_key->matrix[0][1] * matrix_key->matrix[1][2] * matrix_key->matrix[2][0]) + (matrix_key->matrix[0][2] * matrix_key->matrix[1][0] * matrix_key->matrix[2][1]) - (matrix_key->matrix[0][2] * matrix_key->matrix[1][1] * matrix_key->matrix[2][0]) - (matrix_key->matrix[0][1] * matrix_key->matrix[1][0] * matrix_key->matrix[2][2]) - (matrix_key->matrix[0][0] * matrix_key->matrix[1][2] * matrix_key->matrix[2][1]);
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
    printf("%s\n%s\n", av[1], av[2]);


    find_key_matrix_size(matrix_key, key);

    matrix_mess->nb_cols = matrix_key->nb_cols;
    matrix_mess->nb_lines = strlen(message) / matrix_mess->nb_cols;
    if (strlen(message) % matrix_mess->nb_cols != 0)
        matrix_mess->nb_lines++;

    printf("Key matrix:\n");
    init_matrix_key(key, matrix_key);
    calc_deter(matrix_key);
    printf("%d", matrix_key->deter_three);
    printf("\n");
    printf("matrix message :\n");
    init_matrix_message(message, matrix_mess);

    free_malloc(matrix_key);
    free_malloc(matrix_mess);
}