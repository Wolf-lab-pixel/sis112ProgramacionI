#include <stdio.h>

int main(void) {
    int numero, suma = 0;

    printf("Ingresa un número entero: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        suma += i;
    }

    return 0;
}
