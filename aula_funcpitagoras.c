#include <stdio.h>
#include <math.h>

float pitagoras(float v1, float v2){
    return sqrt(pow(v1,2) + pow(v2,2));
}

int main(){
    float a,b,c;

    printf("digite o valor a: ");
    scanf("%f",&a);

    printf("digite o valor b: ");
    scanf("%f",&b);

    c = pitagoras(a,b);

    printf("media do lado c: %.1f\n",c);

    return 0;
}