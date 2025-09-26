#include <stdio.h>
#define TAM 10

int main(){
    int numero [TAM];
    int i;
    int maior;
    int menor;
    int troca;
    int par =0;
    int impar=0;
    float soma =0;
    int esco;

   for(i = 0; i < TAM; i++){
   	printf("Entre com um numero: ");
    scanf("%d",&numero[i]);
    soma += numero[i];

         if(numero[i] > maior){
        	maior = numero[i];
            }
         if (numero[i] < menor){
            menor = numero[i];
   }

   (numero[i] %2 == 0) ? par++ : impar++;
   }

  printf("\nnumeros na ordem digitada:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", numero[i]);
    }

   printf("\nmaior numero: %d ",maior);
    printf("\nmenor numero: %d ",menor);
   	printf("\npares: %d",par);
   	printf("\nimpares: %d",impar);
    printf("\nmedia: %.1f",soma/TAM);

    printf("escolha um numero: ");
    scanf("%d",&esco);
     for(i = 0; i < TAM; i++){
    if(numero[i] == esco){
        printf("\nnumero %d na posicao %d",esco,i+1);
        break;
    }else{
        printf("\nnao tem");
        break;
    }

     }
   
    return 0;
}