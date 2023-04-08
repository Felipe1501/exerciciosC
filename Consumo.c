#include <stdio.h>

int main() {
    double litros, consumo;
    int km;

    scanf("%i", &km);

    scanf("%lf", &litros);

    consumo = km / litros;

    printf("%.3f km/l\n", consumo);

    return 0;
}