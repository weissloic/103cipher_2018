/*
** EPITECH PROJECT, 2018
** 103cypher
** File description:
** description
*/

#include "include/struct.h"

void encrypted_func(matrix_t *matrix_key, matrix_t *matrix_mess, matrix_t *result, char *message, char *key)
{
    printf("Key matrix:\n");
    init_matrix_key(key, matrix_key);
    print_matrix(matrix_key);
    printf("\n");
    init_matrix_message(message, matrix_mess);
    result = mult_matrix(matrix_key, matrix_mess, result);
    printf("Encrypted message:\n");
    print_result(result);
    printf("\n");
}