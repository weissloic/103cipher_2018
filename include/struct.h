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