/*
** EPITECH PROJECT, 2018
** 103cypher
** File description:
** description
*/

typedef struct vector {
    int x;
    int y;
    int z;
} vector_t;

typedef struct matrix {
    int nb_lines;
    int nb_cols;
    int **matrix;
} matrix_t;