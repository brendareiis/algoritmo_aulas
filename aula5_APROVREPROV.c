#include <stdio.h>

int main(){
    int nota,faltas;
    
    printf("digte sua nota: ");
    scanf("%d",&nota);

    printf("digte suas faltas: ");
    scanf("%d",&faltas);
    

if((nota>=9) && (faltas< 20)){
    printf("aprovado");
}else if ((nota>=7) && (faltas<15))
{
    printf("aprovado");
}else if((nota == 5 && nota<7) && (faltas<15))
{
    printf("recuperacao");
}else if ((nota<5) || (faltas>20))
{
    printf("reprovado");
}


    return 0;
}