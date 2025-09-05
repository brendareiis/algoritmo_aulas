#include <stdio.h>

int main(){
    float n1, n2;
    float resposta = 1;
    float media;
   
   do{
    printf("\nn1: ");
    scanf("%f",&n1);

    printf("\nn2: ");
    scanf("%f",&n2);

    media = (n1+n2)/2;

    printf("media: %.2f\n", media);

    printf("pra sair digite 0 e pra continuar digite 1: ");
    scanf("%f",&resposta);

   }while (resposta == 1);

   printf("tchau");
   
    return 0;
}