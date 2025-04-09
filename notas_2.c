#include<stdio.h>
int main()
{
    float n1, n2, n3,medias ;
    float frequencia;

    printf("Digite as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("digite a frequencia do aluno (0 a 100):")
    scanf ("%f, &frequencia");

    medias = (n1 + n2 + n3) / 3;

    if (medias >= 8 && frequencia >=75%)
        printf(" O aluno foi aprovado com distinção pois teve média (%.2f) e frequencia (%.2f%%).\ ", medias, frequencia);
    else if (medias >=6 && frequencia >= 75%){
        printf(" O estudante foi aprovado direto pois teve média (%.2f) e frequencia (%.2f%%).\ " , medias, frequencia );
    else if ((medias >=4 && media <6 && frequencia >=75%)
              (medias >=6 && frequencia < 75)
              (medias >=4 && frequencia >= 50% && frequencia < 75%))

        printf("O estudante foi para final pois teve media (%.2f) e frequencia (%.2f%%).\ ", medias, frequencia);
    else
        printf("O estudante foi reprovado direto pois teve média (%.2f) e frequencia (%.2f%%). \ " , medias, frequencia);

    return 0;

}
