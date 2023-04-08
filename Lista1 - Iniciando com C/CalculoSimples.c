#include <stdio.h>

int main() {
    int cdPeca1, cdPeca2, qt1, qt2;
    double vlPeca1, vlPeca2, vlFinal;

    scanf("%d %d %lf", &cdPeca1, &qt1, &vlPeca1);
    scanf("%d %d %lf", &cdPeca2, &qt2, &vlPeca2);

    vlFinal = ((qt1 * vlPeca1) + (qt2 * vlPeca2));

    printf("VALOR A PAGAR: R$ %.2f\n", vlFinal);

    return 0;
}
