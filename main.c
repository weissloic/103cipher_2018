/*
** EPITECH PROJECT, 2018
** 103cypher
** File description:
** description
*/

#include "include/struct.h"

matrix_t *mult_matrix(matrix_t *key, matrix_t *mes, matrix_t *result)
{
    if (key->nb_cols == mes->nb_cols) {
        result->nb_cols = key->nb_cols;
        result->nb_lines = mes->nb_lines;
    } else
        exit (84);
    malloc_matrix(result);
    init_matrix(result);

    for (int i = 0; i < result->nb_lines; i++) {
        for (int j = 0; j < result->nb_cols; j++) {
            double stock = 0;
            for (int k = 0; k < mes->nb_cols; k++) {
                stock += mes->matrix[i][k] * key->matrix[k][j];
            }
            result->matrix[i][j] = stock;
        }
    }
    return (result);
}

int main(int ac, char **av)
{
    if (ac != 4)
        return (84);
    int flag = atoi(av[3]);
    if (flag != 1 && flag != 0)
        return (84);

    matrix_t *matrix_key = malloc(sizeof(matrix_t));
    matrix_t *matrix_mess = malloc(sizeof(matrix_t));
    matrix_t *result = malloc(sizeof(matrix_t));

    char *message = av[1];
    char *key = av[2];

    find_key_matrix_size(matrix_key, key);
    find_mes_matrix_size(matrix_mess, matrix_key, message);

    printf("Key matrix:\n");
    init_matrix_key(key, matrix_key);
    print_matrix(matrix_key);
    printf("\n");
    init_matrix_message(message, matrix_mess);
    result = mult_matrix(matrix_key, matrix_mess, result);
    printf("Encrypted message:\n");
    print_result(result);
    printf("\n");
    free_malloc(matrix_key);
    free_malloc(matrix_mess);
}