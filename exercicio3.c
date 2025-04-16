#include <stdio.h>

int main()
{

    int numero, maior=0;
    int primeiro=1;

    printf("digite os numeros (digite um valor negativo para encerrar):\n");

    for(;;)
    {
        printf("numero:");
        scanf ("%d", &numero);

        if(primeiro)
        {
            maior = numero;
            primeiro= 0;
        }
        else if (numero>maior)
        {
            maior= numero;
        }
        if(numero <0)
        {
            break;
        }
    }
    printf("o maior valor digitado foi: %d/n", maior);

    return 0;
  }


