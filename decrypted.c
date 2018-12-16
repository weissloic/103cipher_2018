/*
** EPITECH PROJECT, 2018
** 103cypher
** File description:
** description
*/

#include "include/struct.h"

void init_for_decry(matrix_t *matrix_key)
{
    calc_deter(matrix_key);
    copy_float(matrix_key);
    print_matrix(matrix_key);
    if (matrix_key->nb_cols == 2)
        invert_matrix_two(matrix_key);
    else if (matrix_key->nb_cols == 3)
        invert_matrix_three(matrix_key);
    else
        exit(84);
}

void calc_deter(matrix_t *matrix_key)
{
    if (matrix_key->nb_cols == 2) {
        matrix_key->deter_two = (matrix_key->matrix_dec[0][0] * matrix_key->matrix_dec[1][1]) - (matrix_key->matrix_dec[0][1] * matrix_key->matrix_dec[1][0]);
    } else if (matrix_key->nb_cols == 3) {
        matrix_key->deter_three = (matrix_key->matrix_dec[0][0] * matrix_key->matrix_dec[1][1] * matrix_key->matrix_dec[2][2]) +
                                  (matrix_key->matrix_dec[0][1] * matrix_key->matrix_dec[1][2] * matrix_key->matrix_dec[2][0]) +
                                  (matrix_key->matrix_dec[0][2] * matrix_key->matrix_dec[1][0] * matrix_key->matrix_dec[2][1]) -
                                  (matrix_key->matrix_dec[0][2] * matrix_key->matrix_dec[1][1] * matrix_key->matrix_dec[2][0]) -
                                  (matrix_key->matrix_dec[0][1] * matrix_key->matrix_dec[1][0] * matrix_key->matrix_dec[2][2]) -
                                  (matrix_key->matrix_dec[0][0] * matrix_key->matrix_dec[1][2] * matrix_key->matrix_dec[2][1]);
    } else
        exit (84);
}

void invert_matrix_two(matrix_t *matrix_key)
{
    matrix_key->matrix_dec[0][0] = (1 / matrix_key->deter_two) * (matrix_key->matrix_base[0][0]);
    matrix_key->matrix_dec[0][1] = (1 / matrix_key->deter_two) * (-(matrix_key->matrix_base[1][0]));
    matrix_key->matrix_dec[1][0] = (1 / matrix_key->deter_two) * (-(matrix_key->matrix_base[0][1]));
    matrix_key->matrix_dec[1][1] = (1 / matrix_key->deter_two) * (matrix_key->matrix_base[1][1]);
}

void decrypted_func(matrix_t *matrix_key, matrix_t *matrix_mess, matrix_t *result, char *message, char *key)
{
    malloc_float(matrix_key);
    init_float(matrix_key);
    printf("Key matrix:\n");
    init_matrix_key_f(key, matrix_key);
    invert_matrix_three(matrix_key);
    //init_for_decry(matrix_key);
    print_matrix_f(matrix_key);
    printf("\n");
    //init_matrix_message(message, matrix_mess);
    //print_matrix(matrix_mess);
    //result = mult_matrix(matrix_key, matrix_mess, result);
    //printf("Encrypted message:\n");
    //print_result(result);
    printf("\n");
}

void invert_matrix_three(matrix_t *matrix_key)
{
    matrix_key->matrix_dec[0][0] = (1 / matrix_key->deter_three) * (matrix_key->matrix_base[0][0]);
    matrix_key->matrix_dec[0][1] = (1 / matrix_key->deter_three) * (-(matrix_key->matrix_base[1][0]));
    matrix_key->matrix_dec[0][2] = (1 / matrix_key->deter_three) * (matrix_key->matrix_base[2][0]);
    matrix_key->matrix_dec[1][0] = (1 / matrix_key->deter_three) * (-(matrix_key->matrix_base[0][1]));
    matrix_key->matrix_dec[1][1] = (1 / matrix_key->deter_three) * (matrix_key->matrix_base[1][1]);
    matrix_key->matrix_dec[1][2] = (1 / matrix_key->deter_three) * (-(matrix_key->matrix_base[2][1]));
    matrix_key->matrix_dec[2][0] = (1 / matrix_key->deter_three) * (matrix_key->matrix_base[0][2]);
    matrix_key->matrix_dec[2][1] = (1 / matrix_key->deter_three) * (-(matrix_key->matrix_base[1][2]));
    matrix_key->matrix_dec[2][2] = (1 / matrix_key->deter_three) * (matrix_key->matrix_base[2][2]);

    //Intègres ça dans le main pour lancer la fonction selon la longueur de l_argument----------------------------------------!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

}
