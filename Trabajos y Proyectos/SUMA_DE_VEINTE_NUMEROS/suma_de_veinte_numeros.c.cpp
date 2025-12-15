#include <stdio.h>

int main() {
    int i, numero, suma = 0; // Las variables para el indice, el numero y la suma

    // Bucle para tener 20 números
    for (i = 0; i < 20; i++) {
        printf("Ingrese el número #%d: ", i + 1);
        scanf("%d", &numero);
        suma += numero; // Acumular la suma
    }

    // resultado final
    printf("🔢 La suma total de los 20 números es: %d\n", suma);

    return 0;
}
