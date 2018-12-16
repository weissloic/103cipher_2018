/*
** EPITECH PROJECT, 2018
** 103cypher
** File description:
** description
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct matrix {
    int nb_lines;
    int nb_cols;
    int **matrix;
    double deter_three;
    double deter_two;
    int **matrix_base;
    double **matrix_dec;
} matrix_t;

void init_matrix(matrix_t *);
void find_key_matrix_size(matrix_t *, char *);
void find_mes_matrix_size(matrix_t *, matrix_t *, char *);
void init_matrix_message(char *, matrix_t *);
void init_matrix_key(char *, matrix_t *);
void print_matrix(matrix_t *);
void free_malloc(matrix_t *);
void malloc_matrix(matrix_t *);
void print_result(matrix_t *);
matrix_t *mult_matrix(matrix_t *, matrix_t *, matrix_t *);
void calc_deter(matrix_t *);
void encrypted_func(matrix_t *, matrix_t *, matrix_t *, char *, char *);

// FLOAT
void decrypted_func(matrix_t *, matrix_t *, matrix_t *, char *, char *);
void malloc_float(matrix_t *);
void init_float(matrix_t *);
void init_matrix_key_f(char *, matrix_t *);
void calc_deter(matrix_t *);
void init_for_decry(matrix_t *);
void invert_matrix_two(matrix_t *);
void invert_matrix_three(matrix_t *);
void init_matrix_key_f(char *, matrix_t *);
int my_getnbr(char const *);
void print_matrix_f(matrix_t *);
void copy_float(matrix_t *matrix);