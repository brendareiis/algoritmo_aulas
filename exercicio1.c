#include <stdio.h> 

int main (){
    int nota1,nota2,nota3,faltas;
    float media;

    printf("nota 1: ");
    scanf("%d",&nota1);

    printf("nota 2: ");
    scanf("%d",&nota2);

    printf("nota 3: ");
    scanf("%d",&nota3);

    printf("numero faltas: ");
    scanf("%d",&faltas);

    media=(nota1+nota2+nota3)/3.0;

    if((media == 0) && (faltas>18)){
        printf("SR");
    }else if (faltas>18){
        printf("reprovado por faltas");
    }else if ((media >= 9 && media<=10) && (faltas<=18)){
        printf("SS");
    }else if((media >= 7 && media <= 9) && (faltas<=18)){
        printf("MS");
    }else if((media >= 5 && media <=7) && (faltas <= 18)){
        printf("MM");
    }else if((media >= 3 &&  media <5) && (faltas <= 18)){
        printf("MI");
    }else if((media >= 1 && media <3) && (faltas<=18)){
        printf("II");
    }


    return 0;
}