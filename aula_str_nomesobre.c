#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];
    char sobrenome[50];
    char completo[70];

    printf("\nDigite seu nome: ");
    scanf("%s",nome);

    printf("\nDigite seu sobrenome:");
    scanf("%s",sobrenome);

    //fgets(sobrenome,sizeof(sobrenome),stdin);

    strcpy(completo,nome);//copia variavel noem
    strcat(completo," ");//acrescenta espacço
    strcat(completo,sobrenome);//acrescenta sobrenome

    printf("\nO seu primeiro nome e: %s",nome);
    printf("\nO seu sobrenome e: %s",sobrenome);
    printf("\nTamanho do nome: %d",strlen(completo));

    if (toupper(nome[0])=="A"){
        printf("\nSim, comeca com A");
    }else{
        printf("\nNao, nao comeca com A");
    }

    printf("\nO seu nome completo e: %s",completo);

    return 0;
}