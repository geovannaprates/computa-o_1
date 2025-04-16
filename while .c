#include <stdio.h>
int main()
{

 int i,numero, valor;
 numero = 0;
 valor = 0;

 i= 1;
 while( valor >= 0) {
   printf("digite um numero:");
   scanf ("%d", &valor);
   if(valor > numero)
   {
       numero = valor;

       }
    }
   printf("o maior valor foi: %d/n", numero);
   return  0;
   }

