#include <stdio.h>

int main() {
    int numeros[20]; // hacemos un array de 20 posiciones
    int i;

    // Un bucle para poner 20 numeros
    for (i = 0; i < 20; i++) {
        printf("Ingrese el número en la posición %d: ", i);
        scanf("%d", &numeros[i]);
    }

    // Mostrar los valores en posiciones pares en pantalla
    printf("\n📍 Números en posiciones pares:\n");
    for (i = 0; i < 20; i++) {
        if (i % 2 == 0) { // Si el índice es par
            printf("Posición %d: %d\n", i, numeros[i]);
        }
    }

    return 0;
}
