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
    int deter_three;
    int deter_two;
} matrix_t;

void init_matrix(matrix_t *);
void find_key_matrix_size(matrix_t *, char *);
void init_matrix_message(char *, matrix_t *);
void init_matrix_key(char *, matrix_t *);