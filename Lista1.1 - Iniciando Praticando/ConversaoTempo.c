#include <stdio.h>

int main() {

    int minutos, segundos, horas;


    scanf("%i",&segundos);

    horas = segundos / 3600;
    segundos -= horas * 3600;
    minutos = segundos / 60;
    segundos -= minutos * 60;

    printf("%i:%i:%i\n", horas, minutos, segundos);
    return 0;
}