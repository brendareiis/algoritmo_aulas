#include <stdio.h>
#include <locale.h>

int fib(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main(){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int num;

    printf("Digite um numero para calcular o fibonacci: ");
    scanf("%d",&num);
    printf("Fibonacci %d", fib(num));

    return 0;
}