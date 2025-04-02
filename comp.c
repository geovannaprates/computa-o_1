#include  <stdio.h>
int main(){
    int hora, min, seg;
    float aux = 5.5;

    printf("digite hora, minuto e segundo: ");
    scanf("%d %d %d", &hora, &min, &seg);

    // se hora maior que 1 e minuto maior que 15
    if (hora > 1 && min > 15) {
    printf("quanidade de segundos: %d\n", (hora * 3600) + (min * 60) + seg);
    } else {
    // caso contrário

    printf("Horario: %02d:%02d:%02d\n", hora, min, seg);
    printf("Float com duas casas: %.2f", aux);
    }
    return 0;
}
