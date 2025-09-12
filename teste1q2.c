#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0 && numero < 150) {
        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                printf("%d\n", i);
            }
        }
    } else {
        printf("Numero fora do intervalo permitido (0 entre 150).\n");
    }

    return 0;
}