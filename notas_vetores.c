#include <stdio.h>
#define TAM 5

int main(){
    float notas [TAM];
    float soma = 0;
    float media = 0;
    int i;

    printf("\nOla! O sistema vai pedir 5 notas.");
    for(i = 0; i<TAM; i++){
        printf("\nInsira uma nota: ");
        scanf("%f",&notas[i]);
    }

    printf("\nAs notas armazenadas sao: ");
    for(int i =0; i<TAM; i++){
        printf("%0.2f ",notas[i]);
        soma = soma + notas[i];
    }

    media = soma / TAM;

    printf("\nMedia %0.2ff",media);
    printf("\nFim do programa!");

    return 0;
}