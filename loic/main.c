/*
** EPITECH PROJECT, 2018
** 103cypher
** File description:
** description
*/

void calc_deter(matrix_t *matrix_key)
{
    matrix_key->deter_two = (matrix_key->matrix[0][0] * matrix_key->matrix[1][1]) - (matrix_key->matrix[0][1] * matrix_key->matrix[1][0]);
    matrix_key->deter_three = (matrix_key->matrix[0][0] * matrix_key->matrix[1][1] * matrix_key->matrix[2][2]) + (matrix_key->matrix[0][1] * matrix_key->matrix[1][2] * matrix_key->matrix[2][0]) + (matrix_key->matrix[0][2] * matrix_key->matrix[1][0] * matrix_key->matrix[2][1]) - (matrix_key->matrix[0][2] * matrix_key->matrix[1][1] * matrix_key->matrix[2][0]) - (matrix_key->matrix[0][1] * matrix_key->matrix[1][0] * matrix_key->matrix[2][2]) - (matrix_key->matrix[0][0] * matrix_key->matrix[1][2] * matrix_key->matrix[2][1]);
}

void invert_matrix_two(matrix_t *matrix_key, matrix_t *matrix_base)
{
    matrix_key->matrix[0][0] = (1 / matrix_key->deter_two) * (matrix_key->matrix_base[0][0]);
    matrix_key->matrix[0][1] = (1 / matrix_key->deter_two) * (-(matrix_key->matrix_base[1][0]));
    matrix_key->matrix[1][0] = (1 / matrix_key->deter_two) * (-(matrix_key->matrix_base[0][1]));
    matrix_key->matrix[1][1] = (1 / matrix_key->deter_two) * (matrix_key->matrix_base[1][1]);
}

void invert_matrix_three(matrix_t *matrix_key, matrix_t *matrix_base)
{
    matrix_key->matrix[0][0] = (1 / matrix_key->deter_three) * (matrix_key->matrix_base[0][0]);
    matrix_key->matrix[0][1] = (1 / matrix_key->deter_three) * (-(matrix_key->matrix_base[1][0]));
    matrix_key->matrix[0][2] = (1 / matrix_key->deter_three) * (matrix_key->matrix_base[2][0]);
    matrix_key->matrix[1][0] = (1 / matrix_key->deter_three) * (-(matrix_key->matrix_base[0][1]));
    matrix_key->matrix[1][1] = (1 / matrix_key->deter_three) * (matrix_key->matrix_base[1][1]);
    matrix_key->matrix[1][2] = (1 / matrix_key->deter_three) * (-(matrix_key->matrix_base[2][1]));
    matrix_key->matrix[2][0] = (1 / matrix_key->deter_three) * (matrix_key->matrix_base[0][2]);
    matrix_key->matrix[2][1] = (1 / matrix_key->deter_three) * (-(matrix_key->matrix_base[1][2]));
    matrix_key->matrix[2][2] = (1 / matrix_key->deter_three) * (matrix_key->matrix_base[2][2]);

    int av_lenght = strlen(av[2]);
    if (av_lenght < 5)
        determinant = matrix_key->deter_two;
    if (av_lenght < 10)
        determinant = matrix_key->deter_three;

    Intègres ça dans le main pour lancer la fonction selon la longueur de l_argument----------------------------------------!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

}
