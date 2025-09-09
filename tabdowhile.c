#include <stdio.h>

int main(){
    int num;
    int cont = 0;

    printf("\nentre com um numero: ");
    scanf("%d",&num);

    printf("tabuada do numero %d\n",num);

   do{
    printf("%d * %d = %d\n", num, cont, num*cont);

    cont++;

   }while (cont <= 10);
   
    return 0;
}