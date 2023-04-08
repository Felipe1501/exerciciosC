#include <stdio.h>

int main() {
    int nr, hrs;
    float salario, vlHora;

    scanf("%i", &nr);

    scanf("%i", &hrs);

    scanf("%f", &vlHora);

    salario = hrs * vlHora;

    printf("NUMBER = %i\n", nr);
    printf("SALARY = U$ %.2f\n",salario);
    return 0;
}