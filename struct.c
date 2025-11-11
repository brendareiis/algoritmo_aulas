#include <stdio.h>
#define N_PESSOAS 5

struct Pessoa {
    char nome[100];
    int ano_nascimento;
    char sexo;
    float altura;
    float peso;
    double cpf;
};

int main() {
    struct Pessoa pessoas[N_PESSOAS];


    for (int i = 0; i < N_PESSOAS; i++) {
        printf("\n=== Cadastro da pessoa %d ===\n", i + 1);

        printf("Nome: ");
        fflush(stdin);
        fgets(pessoas[i].nome, 100, stdin);

        printf("Ano de nascimento: ");
        scanf("%d", &pessoas[i].ano_nascimento);

        printf("Sexo (M/F): ");
        fflush(stdin);
        scanf(" %c", &pessoas[i].sexo); // espaço antes do %c evita capturar '\n'

        printf("Altura (em metros): ");
        scanf("%f", &pessoas[i].altura);

        printf("Peso (em kg): ");
        scanf("%f", &pessoas[i].peso);

        printf("CPF: ");
        scanf("%lf", &pessoas[i].cpf);
    }

    printf("\n--- Dados cadastrados ---\n");
    for (int i = 0; i < N_PESSOAS; i++) {
        printf("\nPessoa %d:\n", i + 1);
        printf("Nome: %s", pessoas[i].nome);
        printf("Ano de nascimento: %d\n", pessoas[i].ano_nascimento);
        printf("Sexo: %c\n", pessoas[i].sexo);
        printf("Altura: %.2f m\n", pessoas[i].altura);
        printf("Peso: %.2f kg\n", pessoas[i].peso);
        printf("CPF: %.0lf\n", pessoas[i].cpf);
    }

    // Salvar dados em arquivo binário
    FILE *f = fopen("pessoas.dat", "wb"); // Abrir arquivo binário para escrita
    if (f == NULL) {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }

    for (int i = 0; i < N_PESSOAS; i++) {
        fwrite(&pessoas[i], sizeof(struct Pessoa), 1, f); // Escrever estrutura no arquivo binário
    }

    fclose(f); // Fechar o arquivo

    printf("Dados salvos com sucesso!\n");

    return 0;
}