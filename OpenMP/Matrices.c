#include <stdio.h>
#include <stdlib.h>


//definir seccion

#define R1 2 // numero de filas en m1
#define C1 2 // numero de columnas en m1
#define R2 2 // numero de filas en m2
#define C2 3 // numero de columnas en m2

void multiplyMatrix(int m1[][C1], int m2[][C2])
{
	int result[R1][C2];

	printf("La matrix resultante es:\n");

	for (int i = 0; i < R1; i++) {
		for (int j = 0; j < C2; j++) {
			result[i][j] = 0;

			for (int k = 0; k < R2; k++) {
				result[i][j] += m1[i][k] * m2[k][j];
			}

			printf("%d\t", result[i][j]);
		}

		printf("\n");
	}
}

int main()
{
	int m1[R1][C1] = { { 1, 1 }, { 2, 2 } };

	int m2[R2][C2] = { { 1, 1, 1 }, { 2, 2, 2 } };

    // si la columna de m1 no es igual a las filas de m2
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

	return 0;
}
