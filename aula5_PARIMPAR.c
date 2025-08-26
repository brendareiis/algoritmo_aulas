#include <stdio.h>

int main(){
    int a,b;
    
    printf("digte um valor a: ");
    scanf("%d",&a);

    printf("digte um valor b: ");
    scanf("%d",&b);

if(a>b){
    printf("o valor a e maior que o valor b");
}else if (a==b)
{
    printf("os valores sao iguai");
}else
{
    printf("o valor b e maior que o valor a");
}

    return 0;
}