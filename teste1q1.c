#include <stdio.h>

int main(){
    int num;
    int adiv;

    printf("entre com um numero n: ");
    scanf("%d",&num);

    do{
    printf(" ");
    scanf("%d",&adiv);
    if(adiv == num){
        printf("parabens voce acertou");
    }else if(adiv < num){
        printf("o numero correto e menor\n");
    }else{
        printf("o numero correto e maior\n");
    }
    }while(adiv < num || adiv > num);

   
    return 0;
}