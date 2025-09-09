#include <stdio.h>

int main(){
    int num;

    printf("\nentre com um numero: ");
    scanf("%d",&num);

    printf("pares: ");
    for (int i = 0; i<=10; i++) {
        if(i != num) {
            printf("%d, ",i *2);
        }else{
            printf("%d ", i * 2);
        }
        
    }

    printf("\nimpares: ");
    for (int i = 0; i<=10; i++) {
        if(i != num) {
            printf("%d, ",(i *2)+ 1);
        }else{
            printf("%d ",(i *2)+ 1);
        }
        
    }

   
    return 0;
}