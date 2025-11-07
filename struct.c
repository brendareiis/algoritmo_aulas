#include <stdio.h>

typedef struct
{
    char nome[100];
    int ano_nasci;
    char sexo;
    double altura;
    double peso;
    float cpf;
}Pessoa;

int main(){

    Pessoa p1 = {"Brenda Reis Prado", 2006, 'F', 1.60, 46.0, 06668944183.0};

    printf("Nome %s\n",p1.nome);
    printf("Ano de nascimento %d\n",p1.ano_nasci);
    printf("Sexo %c\n",p1.sexo);
    printf("Altura %f\n",p1.altura);
    printf("Peso %f\n",p1.peso);
    printf("CPF %f\n",p1.cpf);

    return 0;
}