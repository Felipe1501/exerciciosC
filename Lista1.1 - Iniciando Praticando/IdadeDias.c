#include <stdio.h>

int main() {

    int anos, meses, dias;


    scanf("%i",&dias);

    anos = dias / 365;
    meses = (dias%365)/30;
    dias = (dias%365)%30;

    printf("%i ano(s)\n", anos);
    printf("%i mes(es)\n", meses);
    printf("%i dia(s)\n", dias);


    return 0;
}