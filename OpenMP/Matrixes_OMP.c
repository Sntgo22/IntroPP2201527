// Este código tuvo como referencia la página de: https://www.geeksforgeeks.org/c-matrix-multiplication/ 
// Modificado por: Santiago Bolaños 
// Multiplicación de Matrices con paralezación 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>  // Agregado para OpenMP

// definir seccion
#define R1 2
#define C1 2
#define R2 2
#define C2 3

void multiplyMatrix(int m1[][C1], int m2[][C2])
{
    int result[R1][C2];

#pragma omp parallel for collapse(2)
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            result[i][j] = 0;

            for (int k = 0; k < R2; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    printf("La matriz resultante es:\n");

    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            printf("%d\t", result[i][j]);
        }

        printf("\n");
    }
}

int main()
{
    int m1[R1][C1] = {{1, 1}, {2, 2}};
    int m2[R2][C2] = {{1, 1, 1}, {2, 2, 2}};

    clock_t start_time = clock();

    if (C1 != R2) {
        printf("El numero de columnas en M1 debería ser "
               "Igual al numero de filas de  "
               "Matrix-2\n");
        printf("Por favor cambia los valores "
               "de tu matriz en "
               "#definir seccion \n");

        exit(EXIT_FAILURE);
    }

    multiplyMatrix(m1, m2);

    clock_t end_time = clock();
    double execution_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecución: %f segundos\n", execution_time);

    return 0;
}
