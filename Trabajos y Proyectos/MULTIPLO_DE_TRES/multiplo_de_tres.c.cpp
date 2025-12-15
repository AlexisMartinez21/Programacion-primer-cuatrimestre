#include <stdio.h>

int main() {
    int numero; // Generamos una variable para el numero

    // Pedimos al usuario que ponga un numero
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    // Confirmamos que el numero sea multiplo de 3
    if (numero % 3 == 0) {
        printf("✅ El número %d es múltiplo de 3\n", numero);
    } else {
        printf("❌ El número %d NO es múltiplo de 3\n", numero);
    }

    return 0;
}
