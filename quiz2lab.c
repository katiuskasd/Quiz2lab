//Katiuska Santana carnet:16-11108 
//Con este codigo se podra meter cualquier polinomio no mayor a un grado 10. 
//El polinomio de mayor grado de nuestro ejercicio es 3, por lo que este codigo cumplira con el objetivo.
#include <stdio.h>
#include <math.h>

int main() {
    int numPolinomios;
    printf("Ingrese el número de polinomios: ");
    scanf("%d", &numPolinomios);

    // Matriz con los coeficientes de los polinomios
    int coeficientes[numPolinomios][10]; // Tomamos un máximo de 10 coeficientes por polinomio
    int grados[numPolinomios];

    for (int i = 0; i < numPolinomios; i++) {
        printf("Ingrese el grado del polinomio %d: ", i + 1);
        scanf("%d", &grados[i]);

        printf("Ingrese los coeficientes del polinomio %d (del término de mayor a menor grado):\n", i + 1);
        for (int j = grados[i]; j >= 0; j--) {
            scanf("%d", &coeficientes[i][j]);
        }
    }


    printf("Suma de coeficientes para cada grado:\n"); 
    // Suma de los coeficientes para cada grado
    for (int j = grados[0]; j >= 0; j--) {
        int sumaCoeficientes = 0;
        for (int i = 0; i < numPolinomios; i++) {
            sumaCoeficientes += coeficientes[i][j];
        }
        if (sumaCoeficientes == 0) {
            printf("Grado %d: 0\n", j);
        } else {
            printf("Grado %d: %.0d\n", j, sumaCoeficientes);
        }
    }

    return 0;
}
