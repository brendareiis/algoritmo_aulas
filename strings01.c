#include <stdio.h>

int main(){
    char pri_nome[5];
    char segu_nome[5];

    printf("digite o primeiro nome: \n");
    scanf("%s",&pri_nome);

    printf("digite o segundo nome: \n");
    scanf("%s",&segu_nome);

    printf("primeiro nome foi %s",pri_nome);
    printf("primeiro nome foi %s",segu_nome);

    return 0;
}