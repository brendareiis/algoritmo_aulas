#include <stdio.h>

int main(){
    int a;
    
    printf("digte um valor a: ");
    scanf("%d",&a);

    if (a%2==0)
    {
        printf("par");
    }else
    {
        printf("impar");
    }
        

    return 0;
}