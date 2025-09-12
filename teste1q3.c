#include <stdio.h>

int main(){
    int numero;
    float soma = 0;
    int total = 0;
    int maior;
   
   do{
    printf("\nEntre com um numero: ");
    scanf("%d",&numero);
    if(numero != 0){
        maior = numero;
        total = total + 1;
        soma = soma + numero;
    }
   }while (numero > 0);

   if(total == 0){
    printf("nao foi inserido nenhum numero\n");
   }else{
    if(total == 1){
        printf("\nFoi inserido %d numero\n",total);
    }
   }
   
   if(maior > numero){
    printf("maior numero: %d",maior);
   }else if(numero == 0){
    printf("maior numero e 0");
   }
   
   printf("media: %.1f",soma/total);

   
    return 0;
}