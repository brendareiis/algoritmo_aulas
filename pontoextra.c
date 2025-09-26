#include <stdio.h>
#define TAM 10

int main(){
    int numero [TAM];
    int i;
    int maior = 0;
    int j;
    int troca;

   for(i = 0; i < TAM; i++){
   	printf("Entre com um numero: ");
    scanf("%d",&numero[i]);
         if(numero[i] > maior){
        	maior = numero[i];
   }
}

  printf("\nnumeros na ordem digitada:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", numero[i]);
    }

   for (i = 0; i < TAM - 1; i++){
   	for (j = i + 1; j < TAM ; j++){
   		if (numero[i] > numero[j]){
   			troca = numero[i];
   			numero[i] = numero[j];
   			numero[j+1] = troca;
		   }
	   }
   }
   
   printf("\nnumeros em ordem crescente:");
   for(i=0; i < TAM; i++){
   	printf("%d ",numero[i]);
   }
   
    
   
    return 0;
}