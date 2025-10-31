#include <stdio.h>
#include <locale.h>

int fatorialSemRecursao(int n){
    int resultado =1;

    for(int i = 1; i <=n; i++){
        resultado= resultado + i;
    }

    return resultado;
}

int fatorialComRecursao(int n){
    if (n == 0 || n == 1)
    {
        return 1;
    }else{
        return n * fatorialComRecursao(n-1);
    }
    
}

int main(){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int num;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d",&num);

    printf("O número digitado foi %d",num);
    
    printf("O resultado do fatorial dessse número é %d",fatorialSemRecursao(num));


   
    return 0;
}