#include <stdio.h>

int main(){
    float numero;
    float soma = 0;
    float total = 0;
   
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
    if(total == 1){
        printf("\nFoi inserido %.0f numero",total);
    }
   }
        

    return 0;
}