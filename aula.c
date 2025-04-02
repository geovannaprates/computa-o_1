
#include<stdio.h>
int main(){
    float n1, n2, n3,
          medias;

    printf("Digite as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    medias = (n1 + n2 + n3) / 3;

    if (medias > 8)
        printf(" Aprovado com distinção. ");
    else if (medias >=6)
        printf("Aprovado direto. ");
    else if (medias >=4)
        printf("Vai para final. ");
    else
        printf("reprovado direto. ");

    return 0;

    }
