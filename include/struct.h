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

void init_matrix(matrix_t *);
void find_key_matrix_size(matrix_t *, char *);
void init_matrix_message(char *, matrix_t *);
void init_matrix_key(char *, matrix_t *);