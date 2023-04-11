#include <stdio.h>

int main(){

    float X, A, B, C, D, E, F;

    scanf("%f %f %f %f %f %f", &A, &B, &C, &D, &E, &F);

    X = (((A + B)/(C - D)) * E) / ((F/(A*B)) + E);

    printf("%.3f", X);

    return 0;
}
