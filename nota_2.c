#include<stdio.h>
int main()
{
    float n1, n2, n3,medias ;
    float frequencia;
    float categoria;

    printf("Digite as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    medias = (n1 + n2 + n3) / 3.0;

    printf("digite a frequencia do aluno :\n");
    scanf ("%f", &frequencia);


    if (medias <0 || medias > 10 || frequencia <0 || frequencia > 100){
        printf(" erro: valores invalidos. A medias deve estar entre 0 a 10, e a frequencia entre 0% e 100%.\n");
        return 1;
        }
    if (medias >8.0 && frequencia >= 75.0){
        printf(" aprovado com distinção.");
        categoria = 1;
        }
       else if (medias >=6.0 && frequencia >= 75.0){
        printf(" aprovado direto.");
        categoria = 2;
        }
    else if ((medias >=4.0 && medias <6.0 && frequencia >=75.0) ||
              (medias >=6.0 && frequencia < 75.0) ||
              (medias >=4.0 && frequencia > 50.0 && frequencia  <75.0)) {
        printf(" vai para final");
        categoria =3;
        }
     else{
        printf(" reprovado direto.");
        categoria = 4;
}
      if (categoria ==1)
   printf("\n0 estudante foi %s pois teve media %.1f e frequencia %.1f%%.\n", medias, frequencia);
       else if ( categoria ==2)
   printf("\n0 estudante foi %s pois teve media %.1f e frequencia %.1f%%.\n", medias, frequencia);
       else if ( categoria ==3)
       printf("\n0 estudante foi %s pois teve media %.1f e frequencia %.1f%%.\n", medias, frequencia);
       else
       printf("\n0 estudante foi %s pois teve media %.1f e frequencia %.1f%%.\n", medias, frequencia);
    return 0;
    }

