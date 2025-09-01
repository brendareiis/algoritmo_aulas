#include <stdio.h> 

int main (){
    int a, b, c;

    printf("lado a: ");
    scanf("%d",&a);

    printf("lado b: ");
    scanf("%d",&b);

    printf("lado c: ");
    scanf("%d",&c);

    if ((b + c < a) || (a + c <b) || (b + a < c)){
        printf("nao e um triangulo");
    }else if((a == b) && (b== c)){
        printf("equilatero");
    }else if  ((a==b) || (a == c) || (b == c)) {
        printf("isoceles");
    }else{
        printf("escaleno");
    }

return 0;
}