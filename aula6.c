#include <stdio.h>

int main(){
    float numero;
    float soma = 0;
    int total = 0;
   
   do{
    printf("\nEntre com um numero: ");
    scanf("%f",&numero);
    if(numero != 0){
        soma = soma + numero;
        total = total + 1; 
    }
   }while (numero > 0);

   if(total == 0){
    printf("nao foi inserido nenhum numero");
   }else{
    printf("foi inserido %d numeros \n",total);     
   }

   printf("media: %.1f",soma/total);
        

    return 0;
}