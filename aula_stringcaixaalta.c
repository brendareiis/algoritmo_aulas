#include <stdio.h>
#include <string.h>

//converter para caixa alta
void toUpperfrase(char toUpperfrase[]){
    for(int i=0; toUpperfrase[i] != '\0';i++){
        toUpperfrase[i] = toupper((unsigned char)toUpperfrase[i]);
    }
}

int main(){
    char frase[100];

    printf("digite uma frase: ");
    fgets(frase,sizeof(frase),stdin);

    printf("Minha frase original: %s\n",frase);

    toUpperfrase(frase);

    printf("Minha frase em caixa alta: %s\n",frase);
        

    return 0;
}