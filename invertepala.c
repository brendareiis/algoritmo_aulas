#include <stdio.h>
#include <locale.h>

void inverte(char *str){
    if (*str == '\0') return;
    inverte(str + 1);
    putchar(*str);
}

int main(void){
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char palavra[100] ;

    printf("Insira uma palavra: ");
    scanf("%s",&palavra);

    inverte(palavra);

    printf("%s",palavra);

    return 0;
}